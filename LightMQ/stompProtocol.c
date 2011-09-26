

#include "stomp.h"

#ifdef __cplusplus
extern "C"
{
#endif
	
	
void stomp_executeCommand(stomp_t* stomp) {
	(*stomp->command_cb)(stomp);
	//string_truncate(&stomp->body, 0);
	//object_clear(stomp->headers);
	//string_truncate(&stomp->buffer, 0);
}

const char *stomp_readBody(stomp_t* stomp, const char *p, const char *pe) {
	register size_t reserve;

	if(0 == stomp->body.len)  {
		stomp->body.len = object_get_uint(stomp->headers, "content-length", 0);
		if(stomp->body_capacity <= stomp->body.len) {
			stomp->body_capacity = stomp->body.len + 1;
			stomp->body.str = (char*)my_malloc(stomp->body_capacity);
		}
		stomp->body_remains = stomp->body.len;
		stomp->body.str[stomp->body.len] = 0;
	}

	reserve = stomp->body.len - stomp->body_remains;

	if(0 == stomp->body_remains) {
		return p;
	}

	if((pe-p) >= stomp->body_remains) {
		memcpy(stomp->body.str + reserve, p, stomp->body_remains);
		p += stomp->body_remains;
		stomp->body_remains = 0;
		return p;
	} else {
		memcpy(stomp->body.str + reserve, p, pe-p);
		stomp->body_remains -= (pe-p);
		return pe;
	}
}
	
void client_cmd_send(stomp_t* stomp) {
}

void client_cmd_subscribe(stomp_t* stomp) {
}

void client_cmd_unsubscribe(stomp_t* stomp) {
}

void client_cmd_beginTransaction(stomp_t* stomp) {
}

void client_cmd_commitTransaction(stomp_t* stomp) {
}

void client_cmd_abortTransaction(stomp_t* stomp) {
}

void client_cmd_ack(stomp_t* stomp) {
}

void client_cmd_nack(stomp_t* stomp) {
}

void client_cmd_connect(stomp_t* stomp) {
}

void client_cmd_disconnect(stomp_t* stomp) {
}

void client_cmd_stomp(stomp_t* stomp) {
}

void client_cmd_protocolError(stomp_t* stomp) {
}



void server_cmd_connected(stomp_t* stomp) {
}

void server_cmd_message(stomp_t* stomp) {
}

void server_cmd_receipt(stomp_t* stomp) {
}

void server_cmd_error(stomp_t* stomp) {
}

void server_cmd_protocolError(stomp_t* stomp) {
}


#ifdef __cplusplus
}
#endif
