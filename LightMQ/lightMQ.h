
#ifndef _LightMQ_H
#define _LightMQ_H 1

#include "mu/object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct light_mq_s light_mq_t;

light_mq_t* light_mq_create(object_t* config);
void light_mq_run(light_mq_t* mq);
void light_mq_interrupt(light_mq_t* mq);
void light_mq_destroy(light_mq_t* mq);

void run_server(object_t* config);



#ifdef __cplusplus
}
#endif

#endif /** _LightMQ_H */