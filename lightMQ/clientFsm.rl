
#include "stomp.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define cmd_protocolError stomp_client_cmd_protocolError

%%{
	machine stomp_client_fsm;
    include stomp_fsm "stomp.rl";
	access stomp->;

	
	main := CLIENT_STREAM;

}%%

%% write data;


void stomp_client_init(stomp_t *stomp) {

	STOMP_INIT(stomp);

	%% write init;
}

int stomp_client_execute(stomp_t *stomp, const char *data, int len, int isEof) {
	const char *p = data;
	const char *pe = data + len;
	const char *eof = isEof ? pe : 0;

	%% write exec;

	return 0;
failure:
    return -1;
}

void stomp_client_finish(stomp_t *stomp) {
	STOMP_DESTROY(stomp);
}

#ifdef __cplusplus
}
#endif
