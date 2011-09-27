

#include "stomp.h"

#ifdef __cplusplus
extern "C"
{
#endif
	
	
void stomp_executeCommand(stomp_t* stomp) {
	(*stomp->msg.cb)(stomp);
#ifdef _DEBUG
	STOMP_MSG_DESTROY(&stomp->old);
	memcpy(&stomp->old, &stomp->msg, sizeof(stomp_msg_t));
	STOMP_MSG_INIT(&stomp->msg);
#else
	stomp->msg.cb = 0;
	string_truncate(&stomp->msg.body, 0);
	object_clear(stomp->msg.headers);
	string_truncate(&stomp->buffer, 0);
#endif
}

const char *stomp_readBody(stomp_t* stomp, const char *p, const char *pe) {
	register size_t reserve;

	if(0 == stomp->msg.body.len)  {
		stomp->msg.body.len = object_get_uint(stomp->msg.headers, "content-length", 0);

		if(stomp->msg.body.len > stomp->max_body_size) {
			return 0;
		}

		if(stomp->body_capacity <= stomp->msg.body.len || 0 == stomp->msg.body.str) {
			stomp->body_capacity = stomp->msg.body.len + 1;
			stomp->msg.body.str = (char*)my_malloc(stomp->body_capacity);
		}
		stomp->body_remains = stomp->msg.body.len;
		stomp->msg.body.str[stomp->msg.body.len] = 0;
	}

	reserve = stomp->msg.body.len - stomp->body_remains;

	if(0 == stomp->body_remains) {
		return p;
	}

	if((pe-p) >= stomp->body_remains) {
		memcpy(stomp->msg.body.str + reserve, p, stomp->body_remains);
		p += stomp->body_remains;
		stomp->body_remains = 0;
		return p;
	} else {
		memcpy(stomp->msg.body.str + reserve, p, pe-p);
		stomp->body_remains -= (pe-p);
		return pe;
	}
}
	
void stomp_client_cmd_send(stomp_t* stomp) {
}

void stomp_client_cmd_subscribe(stomp_t* stomp) {
}

void stomp_client_cmd_unsubscribe(stomp_t* stomp) {
}

void stomp_client_cmd_beginTransaction(stomp_t* stomp) {
}

void stomp_client_cmd_commitTransaction(stomp_t* stomp) {
}

void stomp_client_cmd_abortTransaction(stomp_t* stomp) {
}

void stomp_client_cmd_ack(stomp_t* stomp) {
}

void stomp_client_cmd_nack(stomp_t* stomp) {
}

void stomp_client_cmd_connect(stomp_t* stomp) {

}

void stomp_client_cmd_disconnect(stomp_t* stomp) {
}

void stomp_client_cmd_stomp(stomp_t* stomp) {
}

void stomp_client_cmd_protocolError(stomp_t* stomp) {
}

void stomp_client_cmd_unknowCommand(stomp_t* stomp) {
}



void stomp_server_cmd_connected(stomp_t* stomp) {
}

void stomp_server_cmd_message(stomp_t* stomp) {
}

void stomp_server_cmd_receipt(stomp_t* stomp) {
}

void stomp_server_cmd_error(stomp_t* stomp) {
}

void stomp_server_cmd_protocolError(stomp_t* stomp) {
}

void stomp_server_cmd_unknowCommand(stomp_t* stomp) {
}


#ifdef __cplusplus
}
#endif
