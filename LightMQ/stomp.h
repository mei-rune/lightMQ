
#ifndef _stomp_h_
#define _stomp_h_ 1

#include "mu/object.h"

#ifdef __cplusplus
extern "C" {
#endif
	
typedef struct stomp_msg_s {
	
	string_t command;
	object_t* headers;
	string_t body;
	
	void (*cb)(struct stomp_s* stomp);

	boolean is_delete_cmd;

} stomp_msg_t;

typedef struct stomp_s {

	stomp_msg_t msg;
#ifdef _DEBUG
	stomp_msg_t old;
#endif

	size_t max_body_size;
	size_t max_header_size;

	/**
	 * @defgroup to 协议状态机所需要的中间值
	 * 
	 * @{
	 */
	int cs;

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

#define STOMP_MSG_INIT(msg)                            \
    string_init(&(msg)->command, 0, 0);                \
	(msg)->is_delete_cmd = false;                      \
	(msg)->headers = object_new_table();               \
	string_init(&(msg)->body, 0, 0);                   \
	(msg)->cb = 0;



#define STOMP_MSG_DESTROY(msg)                         \
    if(true == (msg)->is_delete_cmd) {                 \
         string_destroy(&(msg)->command);              \
	} else {                                           \
         string_init(&(msg)->command, 0, 0);           \
	}                                                  \
	(msg)->is_delete_cmd = false;                      \
	object_destroy((msg)->headers);                    \
	(msg)->headers = 0;                                \
	string_destroy(&(msg)->body);                      \
	(msg)->cb = 0;

#ifdef _DEBUG

#define STOMP_INIT(stomp)					           \
	STOMP_MSG_INIT(&stomp->msg);                       \
	STOMP_MSG_INIT(&stomp->old);                       \
	stomp->body_remains = 0;         		           \
	stomp->body_capacity = 0;         		           \
	stomp->cs = 0;							           \
	stomp->top = 0;                                    \
	stomp->stack = (int*)my_malloc(sizeof(int)*256);   \
	string_init(&stomp->name, 0, 0);		           \
	string_init(&stomp->value, 0, 0);		           \
	string_buffer_init(&stomp->buffer);

#define STOMP_DESTROY(stomp)	     		           \
	STOMP_MSG_DESTROY(&stomp->msg);                    \
	STOMP_MSG_DESTROY(&stomp->old);                    \
	stomp->body_remains = 0;         		           \
	stomp->body_capacity = 0;         		           \
	stomp->cs = 0;							           \
	stomp->top = 0;                                    \
	my_free(stomp->stack);                             \
	stomp->stack = 0;                                  \
	string_destroy(&stomp->name);		               \
	string_destroy(&stomp->value);    		           \
	string_buffer_destroy(&stomp->buffer);

#else

#define STOMP_INIT(stomp)					           \
	STOMP_MSG_INIT(&stomp->msg);                       \
	stomp->body_remains = 0;         		           \
	stomp->body_capacity = 0;         		           \
	stomp->cs = 0;							           \
	stomp->top = 0;                                    \
	stomp->stack = (int*)my_malloc(sizeof(int)*256);   \
	string_init(&stomp->name, 0, 0);		           \
	string_init(&stomp->value, 0, 0);		           \
	string_buffer_init(&stomp->buffer);


#define STOMP_DESTROY(stomp)	     		           \
	STOMP_MSG_DESTROY(&stomp->msg);                    \
	stomp->body_remains = 0;         		           \
	stomp->body_capacity = 0;         		           \
	stomp->cs = 0;							           \
	stomp->top = 0;                                    \
	my_free(stomp->stack);                             \
	stomp->stack = 0;                                  \
	string_destroy(&stomp->name);		               \
	string_destroy(&stomp->value);    		           \
	string_buffer_destroy(&stomp->buffer);

#endif


#define STOMP_DEBUG(x) //printf x ; printf("\r\n")


void stomp_executeCommand(stomp_t* stomp);
const char *stomp_readBody(stomp_t* stomp, const char *p, const char *pe);

void stomp_client_cmd_send(stomp_t* stomp);
void stomp_client_cmd_subscribe(stomp_t* stomp);
void stomp_client_cmd_unsubscribe(stomp_t* stomp);
void stomp_client_cmd_beginTransaction(stomp_t* stomp);
void stomp_client_cmd_commitTransaction(stomp_t* stomp);
void stomp_client_cmd_abortTransaction(stomp_t* stomp);
void stomp_client_cmd_ack(stomp_t* stomp);
void stomp_client_cmd_nack(stomp_t* stomp);
void stomp_client_cmd_connect(stomp_t* stomp);
void stomp_client_cmd_disconnect(stomp_t* stomp);
void stomp_client_cmd_stomp(stomp_t* stomp);
void stomp_client_cmd_protocolError(stomp_t* stomp);
void stomp_client_cmd_unknowCommand(stomp_t* stomp);



void stomp_server_cmd_connected(stomp_t* stomp);
void stomp_server_cmd_message(stomp_t* stomp);
void stomp_server_cmd_receipt(stomp_t* stomp);
void stomp_server_cmd_error(stomp_t* stomp);
void stomp_server_cmd_protocolError(stomp_t* stomp);
void stomp_server_cmd_unknowCommand(stomp_t* stomp);



void stomp_server_init(stomp_t *stomp);
int  stomp_server_execute(stomp_t *stomp, const char *data, int len, int isEof);
void stomp_server_finish(stomp_t *stomp);


void stomp_client_init(stomp_t *stomp);
int  stomp_client_execute(stomp_t *stomp, const char *data, int len, int isEof);
void stomp_client_finish(stomp_t *stomp);

#ifdef __cplusplus
}
#endif

#endif /** _stomp_h_ */