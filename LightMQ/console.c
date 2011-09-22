// LightMQ.cpp : 定义控制台应用程序的入口点。
//
#include <stdlib.h>
#include <stdio.h>
#ifdef _WIN32
#include <io.h>
#endif

#include "mu/platform.h"
#include "mu/os_getopt.h"
#include "mu/json_tokener.h"
#include "lightMQ.h"


static char binDirectory[_MAX_PATH];  
static char workDirectory[_MAX_PATH];             /* --workDirectory option */
static char configFile[_MAX_PATH];    /* --config option */

static struct option options[] = {
	{"workDirectory", required_argument, 0, 'd'},
	{"config", required_argument, 0, 'c'},
	{"version", no_argument, 0, 'v'},
	{"help", no_argument, 0, 'h'},
	{0, 0, 0, 0}
};



size_t get_directory_name(const char* dir, char* copy, size_t len) {
	const char* old = dir;
	const char* ptr = dir;
	if(0 == dir) {
		copy[0] = 0;
		return 0;
	}

	while(0 != *ptr) {
		if(('/' == *ptr
			|| '\\' == *ptr)
			&& 0 != ptr[1])
			old = ptr;
		++ ptr;
	}

	if((old - dir)>=len) {
		return -1;
	}

	memcpy(copy, dir, (old - dir));
	copy[(old - dir)] = 0;
	return old - dir;
}

int is_absolute_path(const char* nm)
{
	if(0 == nm)
		return 0;
#ifdef _WIN32
	return (0 != nm[0] && ':' == nm[1])?1:0;
#else
	return ('/' == nm)?1:0;
#endif
}

size_t combine_path(const char* base, const char* relative, char* to, size_t len){
	if(0 == base || 0 == *base || 1 == is_absolute_path(relative)) {
		return snprintf(to, len-1, relative);
	}

	
	if('/' == *relative || '\\' == *relative){
		return snprintf(to, len-1, "%s%s", base, relative);
	} else {
		return snprintf(to, len-1, "%s/%s", base, relative);
	}
}


void usage(int argc, char* args[])
{
	printf("Usage: %s [option] \r\n", args[0]);

	//printf("\t安装一个后台服务:\r\n");
	//printf("\t\t%s --install Win32服务名 [Win32服务的显示名] [Win32服务的描述信息] [Win32服务的执行程序名称] [Win32服务的参数1] [Win32服务的参数2] ...\r\n", get_file_name(args[0], -1));

	//printf("\t卸载一个后台服务:\r\n");
	//printf("\t\t%s --uninstall Win32服务名\r\n", get_file_name(args[0], -1));

	//printf("\t启动一个后台服务:\r\n");
	//printf("\t\t%s --start Win32服务名 [Win32服务的参数1] [Win32服务的参数2] ...\r\n", get_file_name(args[0], -1));

	//printf("\t停止一个后台服务:\r\n");
	//printf("\t\t%s --stop Win32服务名\r\n", get_file_name(args[0], -1));

	//printf("\t作为一个控制台程序运行:\r\n");
	//printf("\t\t%s --console [Win32服务的参数1] [Win32服务的参数2] ...\r\n", get_file_name(args[0], -1));

	//printf("\t作为一个后台服务运行:\r\n");
	//printf("\t\t%s --service [Win32服务的参数1] [Win32服务的参数2] ...\r\n", get_file_name(args[0], -1));

	
	printf("\r\n");

	printf("Mandatory arguments to long options are mandatory for short options too.:\r\n");
	printf("  -c, --config xxx\tset config file name\r\n");
	printf("  -d, --workDirectory xxx\tset work directory\r\n");
	printf("  -v, --version\toutput version information and exit\r\n");
	printf("  -h, -?, --help\t\tdisplay this help and exit\r\n");
}

int main(int argc, char* argv[]) {

	int longIndex;
	int opt;
	object_t* config;
	
	memset(workDirectory, 0, sizeof(workDirectory));
	memset(configFile, 0, sizeof(configFile));

	combine_path(binDirectory, "lightMQ.conf", configFile, _MAX_PATH);

	get_directory_name(argv[0], binDirectory, _MAX_PATH);

    while(-1 != (opt = getopt_long( argc, argv, "d:c:h?", options, &longIndex))) {
        switch( opt ) {
            case 'd':
				combine_path(binDirectory, optarg, workDirectory, _MAX_PATH);
                break;
                
            case 'c':
				combine_path(binDirectory, optarg, configFile, _MAX_PATH);
                break;

            case 'v':
				printf("%s 0.1\r\n", argv[0]);
				return 0;
				
            case '?':
            case 'h':
				usage(argc, argv);
                return 0;
        }
    }

	

	if(0 != workDirectory[0] && -1 == access(workDirectory,0)){
		printf("directory '%s' isn't exists.\n", workDirectory);
		return -1;
	}

	if(-1 == access(configFile,0)){
		printf("config '%s' isn't exists.\n", configFile);
		return -1;
	}

	config = json_parse_from_file(configFile);
	if(NULL == config){
		printf("load '%s' failure.\n", configFile);
		return -1;
	}
	if(0 != workDirectory[0]){
	    object_put_string(config, "workDirectory", workDirectory);
	} else if(NULL == object_get_object(config, "workDirectory")) {
	    object_put_string(config, "workDirectory", ".");
	}
	object_put_string(config, "configFile", configFile);

	run_server(config);

	object_destroy(config);
	return 0;
}

