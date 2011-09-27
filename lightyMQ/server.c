
#include <stdlib.h>
#include <stdio.h>
#ifdef _WIN32
#include <io.h>
#endif

#include "ev/ev.h"
#include "mu/platform.h"
#include "lightMQ.h"

#ifdef __cplusplus
extern "C" {
#endif

struct light_mq_s {
	object_t* config;

};

void run_server(object_t* config) {
	light_mq_t* mq = light_mq_create(config);
	light_mq_run(mq);
	light_mq_destroy(mq);
}



light_mq_t* light_mq_create(object_t* config) {
	size_t index;
	light_mq_t* mq;

	for(index = 0; index < object_length(config); ++ index) {
		object_t* el = object_element_at(config, index);
		printf("%s\t: %s\r\n", object_element_at_string(el, 0, "", 0).str, object_element_at_string(el, 1, "", 0).str);
	}
	mq = (light_mq_t*)my_calloc(1, sizeof(light_mq_t));
	mq->config = config;
	return mq;
}

void light_mq_run(light_mq_t* mq) {
}

void light_mq_interrupt(light_mq_t* mq) {
}

void light_mq_destroy(light_mq_t* mq) {
	my_free(mq);
}

#ifdef __cplusplus
}
#endif