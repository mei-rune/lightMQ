
#include "mu/platform.h"
#include "mu/unittest.h"
#include "stomp.h"

char connect_cmd[] = "CONNECT\n"
	"a1:ddd\n"
	"a2:ccc\n"
    "content-type:text/plain\n"
    "subscription:0\n"
    "message-id:007\n"
    "transaction:tx1\n"
	"content-length:11\n"
	"\n"
	"sdfasdfasdf\0";

char connect_nobody[] = "CONNECT\n"
	"a1:ddd\n"
	"a2:ccc\n"
    "content-type:text/plain\n"
    "subscription:0\n"
    "message-id:007\n"
    "transaction:tx1\n"
	"content-length:0\n"
	"\n"
	"\0";



TEST(stomp, clientFsm) {
	stomp_t stomp;
	stomp_client_init(&stomp);
    //stomp_client_execute(&stomp, connect_cmd, sizeof(connect_cmd), 1);

	for(int i = 0; i < sizeof(connect_cmd); ++ i) {
		stomp_client_execute(&stomp, &connect_cmd[i], 1, 0);
	}

	ASSERT_STREQ("CONNECT", stomp.command.str);
	ASSERT_STREQ("ddd", object_get_string(stomp.headers,"a1",0,0).str);
	ASSERT_STREQ("ccc", object_get_string(stomp.headers,"a2",0,0).str);
	ASSERT_STREQ("text/plain", object_get_string(stomp.headers,"content-type",0,0).str);
	ASSERT_STREQ("0", object_get_string(stomp.headers,"subscription",0,0).str);
	ASSERT_STREQ("007", object_get_string(stomp.headers,"message-id",0,0).str);
	ASSERT_STREQ("tx1", object_get_string(stomp.headers,"transaction",0,0).str);
	ASSERT_EQ(11, object_get_int(stomp.headers,"content-length",0));

	ASSERT_STREQ("sdfasdfasdf", stomp.body.str);


    stomp_client_finish(&stomp);
}



TEST(stomp, client_nobody) {
	stomp_t stomp;
	stomp_client_init(&stomp);
    //stomp_client_execute(&stomp, connect_cmd, sizeof(connect_cmd), 1);

	for(int i = 0; i < sizeof(connect_nobody); ++ i) {
		stomp_client_execute(&stomp, &connect_nobody[i], 1, 0);
	}

	ASSERT_STREQ("CONNECT", stomp.command.str);
	ASSERT_STREQ("ddd", object_get_string(stomp.headers,"a1",0,0).str);
	ASSERT_STREQ("ccc", object_get_string(stomp.headers,"a2",0,0).str);
	ASSERT_STREQ("text/plain", object_get_string(stomp.headers,"content-type",0,0).str);
	ASSERT_STREQ("0", object_get_string(stomp.headers,"subscription",0,0).str);
	ASSERT_STREQ("007", object_get_string(stomp.headers,"message-id",0,0).str);
	ASSERT_STREQ("tx1", object_get_string(stomp.headers,"transaction",0,0).str);
	ASSERT_EQ(0, object_get_int(stomp.headers,"content-length",0));

	ASSERT_EQ(0, stomp.body.len);


    stomp_client_finish(&stomp);
}
