
#include "mu/platform.h"
#include "mu/unittest.h"
#include "stomp.h"


#define stomp_test_init  stomp_server_init
#define stomp_test_execute  stomp_server_execute
#define stomp_test_finish  stomp_server_finish
#define fsm_cmd_protocolError stomp_server_cmd_protocolError
#define FSM_TEST(x, y)  TEST(x, server_##y)
#define MAKE_VARNAME(x) server_##x
#include "commonFsmTest.h"
