
#ifndef _stomp_h_
#define _stomp_h_ 1

#include "mu/object.h"

#ifdef __cplusplus
extern "C" {
#endif

	
typedef struct stomp_s {

	void (*command_cb)(struct stomp_s* stomp);

	string_t command;
	object_t* headers;
	string_t body;
	

	/**
	 * @defgroup to 协议状态机所需要的中间值
	 * 
	 * @{
	 */
	int cs;
	/** 标记一个 token 的开始 */
	const char* mark;

	string_t name;
	string_t value;

	/** 一个 token 的值 */
	string_buffer_t buffer;

	/** 消息体的剩作字节 */
	size_t body_remains;
	size_t body_capacity;

	int top;
	int* stack;

	
	/** @} */
} stomp_t;

#define STOMP_INIT(stomp)					           \
	stomp->command_cb = 0;					           \
	string_init(&stomp->command, 0, 0);		           \
	string_init(&stomp->body, 0, 0);		           \
	stomp->body_remains = 0;         		           \
	stomp->body_capacity = 0;         		           \
	stomp->cs = 0;							           \
	stomp->mark = 0;						           \
	stomp->top = 0;                                    \
	stomp->stack = (int*)my_malloc(sizeof(int)*256);   \
	string_init(&stomp->name, 0, 0);		           \
	string_init(&stomp->value, 0, 0);		           \
	string_buffer_init(&stomp->buffer);                \
	stomp->headers = object_new_table();



#define STOMP_DEBUG(x) printf x ; printf("\r\n")


void stomp_executeCommand(stomp_t* stomp);
const char *stomp_readBody(stomp_t* stomp, const char *p, const char *pe);

void client_cmd_send(stomp_t* stomp);
void client_cmd_subscribe(stomp_t* stomp);
void client_cmd_unsubscribe(stomp_t* stomp);
void client_cmd_beginTransaction(stomp_t* stomp);
void client_cmd_commitTransaction(stomp_t* stomp);
void client_cmd_abortTransaction(stomp_t* stomp);
void client_cmd_ack(stomp_t* stomp);
void client_cmd_nack(stomp_t* stomp);
void client_cmd_connect(stomp_t* stomp);
void client_cmd_disconnect(stomp_t* stomp);
void client_cmd_stomp(stomp_t* stomp);
void client_cmd_protocolError(stomp_t* stomp);


void server_cmd_connected(stomp_t* stomp);
void server_cmd_message(stomp_t* stomp);
void server_cmd_receipt(stomp_t* stomp);
void server_cmd_error(stomp_t* stomp);
void server_cmd_protocolError(stomp_t* stomp);



void stomp_server_init(stomp_t *stomp);
void stomp_server_execute(stomp_t *stomp, const char *data, int len, int isEof);
int  stomp_server_finish(stomp_t *stomp);


void stomp_client_init(stomp_t *stomp);
void stomp_client_execute(stomp_t *stomp, const char *data, int len, int isEof);
int  stomp_client_finish(stomp_t *stomp);

#ifdef __cplusplus
}
#endif

#endif /** _stomp_h_ */