
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
boolean initialize_network();

/**
 * �ر�socket����
 */
void shutdown_network();

/**
 * ���� socket �Ƿ�����, val=1Ϊ������ val=0Ϊ������
 */
boolean set_nonblocking(socket_type sock);

/**
 * �� <schema>://<addr>:<port> ��ʽ��ȡ�� addr �� port ת���� sockaddr����
 * �� schema �� port �ǿ�ѡ��,���� schema �����һ���ַ��� '6' ʱ��ʾ����
 * IPv6��ʽ.
 */
boolean string_to_address(const char* host
                     , struct sockaddr* addr);

/**
 * ����ַת��Ϊ <schema>://<addr>:<port> ��ʽ���ַ���
 * @return �ɹ�����ת������ַ������ȣ����򷵻� -1
 */
boolean address_to_string(struct sockaddr* name
                     , const char* schema
						 , size_t schema_len
						 , string_buffer_t* url);


#ifdef __cplusplus
}
#endif

#endif // _networking_h_
