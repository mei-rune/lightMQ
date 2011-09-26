
#ifndef _networking_h_
#define _networking_h_ 1

#include "mu/platform.h"
#include "mu/string_buffer.h"

#ifdef __cplusplus
extern "C" {
#endif

#define IP_ADDRESS_LEN      60


/**
 * 初始化socket服务
 */
DLL_VARIABLE boolean initialize_network();

/**
 * 关闭socket服务
 */
DLL_VARIABLE void shutdown_network();

/**
 * 设置 socket 是否阻塞, val=1为阻塞， val=0为非阻塞
 */
DLL_VARIABLE boolean set_nonblocking(socket_type sock);

/**
 * 从 <schema>://<addr>:<port> 格式中取出 addr 和 port 转换成 sockaddr，其
 * 中 schema 与 port 是可选的,其中 schema 中最后一个字符是 '6' 时表示采用
 * IPv6格式.
 */
DLL_VARIABLE boolean string_to_address(const char* host
                     , struct sockaddr* addr);

/**
 * 将地址转换为 <schema>://<addr>:<port> 格式的字符串
 * @return 成功返回转换后的字符串长度，否则返回 -1
 */
DLL_VARIABLE boolean address_to_string(struct sockaddr* name
                     , const char* schema
						 , size_t schema_len
						 , string_buffer_t* url);

/**
 * 创建一个监听在 url 上的 tcpserver
 */
DLL_VARIABLE socket_type listen_at(const char* url);

#ifdef _WIN32
#define socket_write(fd, data, len) send(fd, data, len, 0)
#define socket_read(fd, data, len) recv(fd, data, len, 0)
#else
#define socket_write(fd, data, len) write(fd, data, len)
#define socket_read(fd, data, len) read(fd, data, len, 0)
#endif

#ifdef __cplusplus
}
#endif

#endif // _networking_h_
