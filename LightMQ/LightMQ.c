
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#ifdef _WIN32
#include <io.h>
#endif

#include "mu/platform.h"
#include "mu/networking.h"
#include "ev/ev.h"
#include "lightMQ.h"

#ifdef __cplusplus
extern "C" {
#endif

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
} light_mq_client_t;

void run_server(object_t* config) {
	light_mq_t* mq = light_mq_create(config);
	light_mq_run(mq);
	light_mq_destroy(mq);
}


static void client_close(light_mq_client_t *cli){
	
	ev_io_stop(cli->loop, &cli->write_io);
	ev_io_stop(cli->loop, &cli->read_io);
 	closesocket(cli->fd);
	my_free(cli);
}

static void write_cb(struct ev_loop *loop, struct ev_io *w, int revents) { 
	light_mq_client_t *cli = ((light_mq_client_t*) (((char*)w) - offsetof(light_mq_client_t,write_io)));
	
	// todo
    socket_write(cli->fd, "hello\n",6);
	
	client_close(cli);
}

static void read_cb(struct ev_loop *loop, struct ev_io *w, int revents) {	
	
	char buf[1024];
	int len = 1024;

	light_mq_client_t *cli = ((light_mq_client_t*) (((char*)w) - offsetof(light_mq_client_t,read_io)));

	len = socket_read(cli->fd, buf, len);
	if(len <= 0){
		client_close(cli);
		return;
	}

	buf[len] = 0;
	printf(buf);
}

static void accept_cb(struct ev_loop *loop, struct ev_io *w, int revents) {
	light_mq_t *mq;
	light_mq_client_t* cli = 0;
	
	cli =(light_mq_client_t*) my_calloc(1, sizeof(light_mq_client_t));
	mq = ((light_mq_t*) (((char*)w) - offsetof(light_mq_t,listen_io)));

	cli->remote_addr_len = sizeof(cli->remote_addr);

	cli->fd = accept(w->fd, (struct sockaddr*)&cli->remote_addr, &cli->remote_addr_len);
    if (INVALID_SOCKET == cli->fd) {
		goto error;
    }
	
    if(!set_nonblocking(w->fd)) {
		goto error;
	}
	cli->loop = loop;
	ev_io_init(&cli->read_io,read_cb,cli->fd,EV_READ);
	ev_io_init(&cli->write_io,write_cb,cli->fd,EV_WRITE);

	ev_io_start(loop,&cli->read_io);
	return;

error:
	if(0 != cli) {
		if (INVALID_SOCKET == cli->fd) {
			close(cli->fd);
		}
		my_free(cli);
		cli = 0;
	}
	return;
}

light_mq_t* light_mq_create(object_t* config) {
	size_t index;
	light_mq_t* mq;
	socket_type s;

	for(index = 0; index < object_length(config); ++ index) {
		object_t* el = object_element_at(config, index);
		printf("%s\t: %s\r\n", object_element_at_string(el, 0, "", 0).str, object_element_at_string(el, 1, "", 0).str);
	}
	
	s = listen_at(object_get_string(config, "listen_at", "0.0.0.0:5555", -1).str);
	if(INVALID_SOCKET == s){
		return 0;
	}

	mq = (light_mq_t*)my_calloc(1, sizeof(light_mq_t));
	mq->config = config;
	mq->loop = ev_default_loop(EVBACKEND_POLL);
	ev_io_init(&(mq->listen_io), accept_cb, s, EV_READ);

	return mq;
}

void light_mq_run(light_mq_t* mq) {
	ev_io_start(mq->loop,&mq->listen_io);
	ev_loop (mq->loop, 0);
}

void light_mq_interrupt(light_mq_t* mq) {
	mq->is_running = false;
	ev_io_stop(mq->loop,&mq->listen_io);
}

void light_mq_destroy(light_mq_t* mq) {
	my_free(mq);
}

#ifdef __cplusplus
}
#endif