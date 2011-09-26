
#ifndef _networking_h_
#define _networking_h_ 1

#include "mu/platform.h"
#include "mu/string_buffer.h"

#ifdef __cplusplus
extern "C" {
#endif

#define IP_ADDRESS_LEN      60


/**
 * ��ʼ��socket����
 */
DLL_VARIABLE boolean initialize_network();

/**
 * �ر�socket����
 */
DLL_VARIABLE void shutdown_network();

/**
 * ���� socket �Ƿ�����, val=1Ϊ������ val=0Ϊ������
 */
DLL_VARIABLE boolean set_nonblocking(socket_type sock);

/**
 * �� <schema>://<addr>:<port> ��ʽ��ȡ�� addr �� port ת���� sockaddr����
 * �� schema �� port �ǿ�ѡ��,���� schema �����һ���ַ��� '6' ʱ��ʾ����
 * IPv6��ʽ.
 */
DLL_VARIABLE boolean string_to_address(const char* host
                     , struct sockaddr* addr);

/**
 * ����ַת��Ϊ <schema>://<addr>:<port> ��ʽ���ַ���
 * @return �ɹ�����ת������ַ������ȣ����򷵻� -1
 */
DLL_VARIABLE boolean address_to_string(struct sockaddr* name
                     , const char* schema
						 , size_t schema_len
						 , string_buffer_t* url);

/**
 * ����һ�������� url �ϵ� tcpserver
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
