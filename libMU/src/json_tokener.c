
 
#include <stdio.h>
 
#include "mu/json_tokener.h"
#include "mu/string_buffer.h"
#include "json/json_private.h"

#ifdef __cplusplus
extern "C" {
#endif


DLL_VARIABLE object_t* json_parse_from_string(const char* data, size_t len) {
	JSON json;
	object_t* ret;
	if(NULL == _parse_JSON(&json, data, data + len, &ret))
		return NULL;
	return ret;
}




DLL_VARIABLE object_t* json_parse_from_file(const char* name) {
	object_t* result;
	string_buffer_t buffer = STRING_BUFFER_DEFAULT;
	if(NULL == string_buffer_append_from_file(&buffer, name))
		return NULL;

	result = json_parse_from_string(buffer.str, buffer.len);
	string_buffer_destroy(&buffer);
	return result;
}


#ifdef __cplusplus
}
#endif