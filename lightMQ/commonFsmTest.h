

char MAKE_VARNAME(common_cmd)[] = "CONNECT\n"
	"a1:ddd\n"
	"a2:ccc\n"
    "content-type:text/plain\n"
    "subscription:0\n"
    "message-id:007\n"
    "transaction:tx1\n"
	"content-length:11\n"
	"\n"
	"sdfasdfasdf\0";

char MAKE_VARNAME(common_nobody)[] = "CONNECT\n"
	"a1:ddd\n"
	"a2:ccc\n"
    "content-type:text/plain\n"
    "subscription:0\n"
    "message-id:007\n"
    "transaction:tx1\n"
	"content-length:0\n"
	"\n"
	"\0";

char MAKE_VARNAME(common_errorcommand)[] = "aa\n"
	"a1:ddd\n"
	"a2:ccc\n"
    "content-type:text/plain\n"
    "subscription:0\n"
    "message-id:007\n"
    "transaction:tx1\n"
	"\n"
	"\0";



char MAKE_VARNAME(common_errorheader)[] = "aa\n"
	"a1:ddd\n"
	"a2:ccc\n"
    "content-type:text/plain\n"
    "subscription:0\n"
    "message-id:007\n"
    "transaction:tx1\n"
	"a2\n"
	"\n"
	"\0";


char MAKE_VARNAME(common_errorheadervalue)[] = "aa\n"
	"a1:ddd\n"
	"a2:ccc\n"
    "content-type:text/plain\n"
    "subscription:0\n"
    "message-id:007\n"
    "transaction:tx1\n"
	"a3:ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss"
	"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss"
	"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss"
	"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss"
	"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss"
	"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss\n"
	"\n"
	"\0";



char MAKE_VARNAME(common_errorheadername)[] = "aa\n"
	"a1:ddd\n"
	"a2:ccc\n"
    "content-type:text/plain\n"
    "subscription:0\n"
    "message-id:007\n"
    "transaction:tx1\n"
	"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss"
	"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss"
	"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss"
	"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss"
	"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss"
	"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss:23\n"
	"\n"
	"\0";

char MAKE_VARNAME(common_noheadername)[] = "aa\n"
	"a1:ddd\n"
	"a2:ccc\n"
    "content-type:text/plain\n"
    "subscription:0\n"
    "message-id:007\n"
    "transaction:tx1\n"
	":23\n"
	"\n"
	"\0";

char MAKE_VARNAME(common_noheadervalue)[] = "aa\n"
	"a1:ddd\n"
	"a2:ccc\n"
    "content-type:text/plain\n"
    "subscription:0\n"
    "message-id:007\n"
    "transaction:tx1\n"
	"a3:\n"
	"\n"
	"\0";

#define ASERT_HEADER(stomp, cmd, length)                                                       \
	ASSERT_STREQ(cmd, stomp.old.command.str);                                                  \
	ASSERT_STREQ("ddd", object_get_string(stomp.old.headers,"a1",0,0).str);                    \
	ASSERT_STREQ("ccc", object_get_string(stomp.old.headers,"a2",0,0).str);                    \
	ASSERT_STREQ("text/plain", object_get_string(stomp.old.headers,"content-type",0,0).str);   \
	ASSERT_STREQ("0", object_get_string(stomp.old.headers,"subscription",0,0).str);            \
	ASSERT_STREQ("007", object_get_string(stomp.old.headers,"message-id",0,0).str);            \
	ASSERT_STREQ("tx1", object_get_string(stomp.old.headers,"transaction",0,0).str);           \
	ASSERT_EQ(length, object_get_int(stomp.old.headers,"content-length",0));

FSM_TEST(stomp, fsm_simple) {
	stomp_t stomp[2];
	stomp_test_init(&stomp[0]);
	stomp_test_init(&stomp[1]);

	for(int i = 0; i < sizeof(MAKE_VARNAME(common_cmd)); ++ i) {
		if(-1 == stomp_test_execute(&stomp[0], &MAKE_VARNAME(common_cmd)[i], 1, 0))
			break;
	}
	stomp_test_execute(&stomp[1], MAKE_VARNAME(common_cmd), sizeof(MAKE_VARNAME(common_cmd)), 0);

	ASERT_HEADER(stomp[0], "CONNECT",11);
	ASSERT_STREQ("sdfasdfasdf", stomp[0].old.body.str);
	
	ASERT_HEADER(stomp[1], "CONNECT",11);
	ASSERT_STREQ("sdfasdfasdf", stomp[1].old.body.str);


	STOMP_MSG_DESTROY(&stomp[0].old);
	STOMP_MSG_DESTROY(&stomp[1].old);

	for(int i = 0; i < sizeof(MAKE_VARNAME(common_cmd)); ++ i) {
		if(-1 == stomp_test_execute(&stomp[0], &MAKE_VARNAME(common_cmd)[i], 1, 0))
			break;
	}
	stomp_test_execute(&stomp[1], MAKE_VARNAME(common_cmd), sizeof(MAKE_VARNAME(common_cmd)), 0);

	ASERT_HEADER(stomp[0], "CONNECT",11);
	ASSERT_STREQ("sdfasdfasdf", stomp[0].old.body.str);
	
	ASERT_HEADER(stomp[1], "CONNECT",11);
	ASSERT_STREQ("sdfasdfasdf", stomp[1].old.body.str);

    stomp_test_finish(&stomp[0]);
    stomp_test_finish(&stomp[1]);
}

FSM_TEST(stomp, common_errorheadername) {
	stomp_t stomp[2];
	stomp_test_init(&stomp[0]);
	stomp_test_init(&stomp[1]);

	for(int i = 0; i < sizeof(MAKE_VARNAME(common_errorheadername)); ++ i) {
		if(-1 == stomp_test_execute(&stomp[0], &MAKE_VARNAME(common_errorheadername)[i], 1, 0))
			break;
	}
	stomp_test_execute(&stomp[1], MAKE_VARNAME(common_errorheadername), sizeof(MAKE_VARNAME(common_errorheadername)), 0);

	ASERT_HEADER(stomp[0], "aa", 0);
	ASSERT_EQ(&fsm_cmd_protocolError, stomp[0].old.cb);
	ASERT_HEADER(stomp[1], "aa", 0);
	ASSERT_EQ(&fsm_cmd_protocolError, stomp[1].old.cb);

	
    stomp_test_finish(&stomp[0]);
    stomp_test_finish(&stomp[1]);
}


FSM_TEST(stomp, common_errorheadervalue) {
	stomp_t stomp[2];
	stomp_test_init(&stomp[0]);
	stomp_test_init(&stomp[1]);

	for(int i = 0; i < sizeof(MAKE_VARNAME(common_errorheadervalue)); ++ i) {
		if(-1 == stomp_test_execute(&stomp[0], &MAKE_VARNAME(common_errorheadername)[i], 1, 0))
			break;
	}
	stomp_test_execute(&stomp[1], MAKE_VARNAME(common_errorheadervalue), sizeof(MAKE_VARNAME(common_errorheadervalue)), 0);

	
	ASERT_HEADER(stomp[0], "aa", 0);
	ASSERT_EQ(&fsm_cmd_protocolError, stomp[0].old.cb);
	ASERT_HEADER(stomp[1], "aa", 0);
	ASSERT_EQ(&fsm_cmd_protocolError, stomp[1].old.cb);
	
    stomp_test_finish(&stomp[0]);
    stomp_test_finish(&stomp[1]);
}


FSM_TEST(stomp, common_noheadername) {
	
	stomp_t stomp[2];
	stomp_test_init(&stomp[0]);
	stomp_test_init(&stomp[1]);

	for(int i = 0; i < sizeof(MAKE_VARNAME(common_noheadername)); ++ i) {
		if(-1 == stomp_test_execute(&stomp[0], &MAKE_VARNAME(common_noheadername)[i], 1, 0))
			break;
	}
	stomp_test_execute(&stomp[1], MAKE_VARNAME(common_noheadername), sizeof(MAKE_VARNAME(common_noheadername)), 0);

	ASERT_HEADER(stomp[0], "aa", 0);
	ASSERT_EQ(&fsm_cmd_protocolError, stomp[0].old.cb);
	ASERT_HEADER(stomp[1], "aa", 0);
	ASSERT_EQ(&fsm_cmd_protocolError, stomp[1].old.cb);
	
    stomp_test_finish(&stomp[0]);
    stomp_test_finish(&stomp[1]);
}


FSM_TEST(stomp, common_noheadervalue) {
	
	stomp_t stomp[2];
	stomp_test_init(&stomp[0]);
	stomp_test_init(&stomp[1]);

	for(int i = 0; i < sizeof(MAKE_VARNAME(common_noheadervalue)); ++ i) {
		if(-1 == stomp_test_execute(&stomp[0], &MAKE_VARNAME(common_noheadervalue)[i], 1, 0))
			break;
	}
	stomp_test_execute(&stomp[1], MAKE_VARNAME(common_noheadervalue), sizeof(MAKE_VARNAME(common_noheadervalue)), 0);
	
	ASERT_HEADER(stomp[0], "aa", 0);
	ASSERT_EQ(&fsm_cmd_protocolError, stomp[0].old.cb);
	ASERT_HEADER(stomp[1], "aa", 0);
	ASSERT_EQ(&fsm_cmd_protocolError, stomp[1].old.cb);

	
    stomp_test_finish(&stomp[0]);
    stomp_test_finish(&stomp[1]);
}

FSM_TEST(stomp, common_errorheader) {
	
	stomp_t stomp[2];
	stomp_test_init(&stomp[0]);
	stomp_test_init(&stomp[1]);

	for(int i = 0; i < sizeof(MAKE_VARNAME(common_errorheader)); ++ i) {
		if(-1 == stomp_test_execute(&stomp[0], &MAKE_VARNAME(common_errorheader)[i], 1, 0))
			break;
	}
	stomp_test_execute(&stomp[1], MAKE_VARNAME(common_errorheader), sizeof(MAKE_VARNAME(common_errorheader)), 0);
	
	ASERT_HEADER(stomp[0], "aa", 0);
	ASSERT_EQ(&fsm_cmd_protocolError, stomp[0].old.cb);
	ASERT_HEADER(stomp[1], "aa", 0);
	ASSERT_EQ(&fsm_cmd_protocolError, stomp[1].old.cb);

	
    stomp_test_finish(&stomp[0]);
    stomp_test_finish(&stomp[1]);
}

FSM_TEST(stomp, common_errorcommand) {
	
	stomp_t stomp[2];
	stomp_test_init(&stomp[0]);
	stomp_test_init(&stomp[1]);

	for(int i = 0; i < sizeof(MAKE_VARNAME(common_errorcommand)); ++ i) {
		if(-1 == stomp_test_execute(&stomp[0], &MAKE_VARNAME(common_errorcommand)[i], 1, 0))
			break;
	}
	stomp_test_execute(&stomp[1], MAKE_VARNAME(common_errorcommand), sizeof(MAKE_VARNAME(common_errorcommand)), 0);

    ASERT_HEADER(stomp[0], "aa", 0);
	ASSERT_EQ(0, stomp[0].old.body.len);

	ASERT_HEADER(stomp[1], "aa", 0);
	ASSERT_EQ(0, stomp[1].old.body.len);

	
    stomp_test_finish(&stomp[0]);
    stomp_test_finish(&stomp[1]);
}


FSM_TEST(stomp, common_nobody) {
	
	stomp_t stomp[2];
	stomp_test_init(&stomp[0]);
	stomp_test_init(&stomp[1]);

	for(int i = 0; i < sizeof(MAKE_VARNAME(common_nobody)); ++ i) {
		if(-1 == stomp_test_execute(&stomp[0], &MAKE_VARNAME(common_nobody)[i], 1, 0))
			break;
	}
	stomp_test_execute(&stomp[1], MAKE_VARNAME(common_nobody), sizeof(MAKE_VARNAME(common_nobody)), 0);

    ASERT_HEADER(stomp[0], "CONNECT", 0);
	ASSERT_EQ(0, stomp[0].old.body.len);

	ASERT_HEADER(stomp[1], "CONNECT", 0);
	ASSERT_EQ(0, stomp[1].old.body.len);

	
    stomp_test_finish(&stomp[0]);
    stomp_test_finish(&stomp[1]);
}
