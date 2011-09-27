
#ifndef _lq_internal_h_
#define _lq_internal_h_ 1


#ifdef __cplusplus
extern "C" {
#endif

typedef struct destination_s {
	string_t name;
	size_t index;
} destination_t;


struct light_mq_s {
	object_t* config;
	struct ev_loop* loop;
	socket_type listen_fd;
	ev_io listen_io;
	boolean is_running;
};


typedef struct light_mq_client_s {
	socket_type fd;
	struct sockaddr_storage remote_addr;
    socklen_t remote_addr_len;

	
	struct ev_loop* loop;
	ev_io write_io;
	ev_io read_io;

	stomp_t stomp;

} light_mq_client_t;

#ifdef __cplusplus
}
#endif

#endif /** _lq_internal_h_ */