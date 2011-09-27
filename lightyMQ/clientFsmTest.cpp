
#include "mu/platform.h"
#include "mu/unittest.h"
#include "stomp.h"

#define stomp_test_init  stomp_client_init
#define stomp_test_execute  stomp_client_execute
#define stomp_test_finish  stomp_client_finish
#define fsm_cmd_protocolError stomp_client_cmd_protocolError


#define FSM_TEST(x, y)  TEST(x, client_##y)
#define MAKE_VARNAME(x) client_##x
#include "commonFsmTest.h"