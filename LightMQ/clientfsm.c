
#line 1 "clientfsm.rl"

#include "stomp.h"

#ifdef __cplusplus
extern "C"
{
#endif


#line 17 "clientfsm.rl"



#line 2 "clientfsm.c"
static const int stomp_client_fsm_start = 1;
static const int stomp_client_fsm_first_final = 75;
static const int stomp_client_fsm_error = 0;

static const int stomp_client_fsm_en_BODY = 76;
static const int stomp_client_fsm_en_main = 1;


#line 20 "clientfsm.rl"


void stomp_client_init(stomp_t *stomp) {

	STOMP_INIT(stomp);

	
#line 9 "clientfsm.c"
	{
	 stomp->cs = stomp_client_fsm_start;
	 stomp->top = 0;
	}

#line 27 "clientfsm.rl"
}

void stomp_client_execute(stomp_t *stomp, const char *data, int len, int isEof) {
	const char *p = data;
	const char *pe = data + len;
	const char *eof = isEof ? pe : 0;

	
#line 13 "clientfsm.c"
	{
	if ( p == pe )
		goto _test_eof;
	goto _resume;

_again:
	switch (  stomp->cs ) {
		case 1: goto st1;
		case 0: goto st0;
		case 2: goto st2;
		case 3: goto st3;
		case 4: goto st4;
		case 5: goto st5;
		case 6: goto st6;
		case 7: goto st7;
		case 8: goto st8;
		case 9: goto st9;
		case 10: goto st10;
		case 11: goto st11;
		case 12: goto st12;
		case 13: goto st13;
		case 75: goto st75;
		case 14: goto st14;
		case 15: goto st15;
		case 16: goto st16;
		case 17: goto st17;
		case 18: goto st18;
		case 19: goto st19;
		case 20: goto st20;
		case 21: goto st21;
		case 22: goto st22;
		case 23: goto st23;
		case 24: goto st24;
		case 25: goto st25;
		case 26: goto st26;
		case 27: goto st27;
		case 28: goto st28;
		case 29: goto st29;
		case 30: goto st30;
		case 31: goto st31;
		case 32: goto st32;
		case 33: goto st33;
		case 34: goto st34;
		case 35: goto st35;
		case 36: goto st36;
		case 37: goto st37;
		case 38: goto st38;
		case 39: goto st39;
		case 40: goto st40;
		case 41: goto st41;
		case 42: goto st42;
		case 43: goto st43;
		case 44: goto st44;
		case 45: goto st45;
		case 46: goto st46;
		case 47: goto st47;
		case 48: goto st48;
		case 49: goto st49;
		case 50: goto st50;
		case 51: goto st51;
		case 52: goto st52;
		case 53: goto st53;
		case 54: goto st54;
		case 55: goto st55;
		case 56: goto st56;
		case 57: goto st57;
		case 58: goto st58;
		case 59: goto st59;
		case 60: goto st60;
		case 61: goto st61;
		case 62: goto st62;
		case 63: goto st63;
		case 64: goto st64;
		case 65: goto st65;
		case 66: goto st66;
		case 67: goto st67;
		case 68: goto st68;
		case 69: goto st69;
		case 70: goto st70;
		case 71: goto st71;
		case 72: goto st72;
		case 73: goto st73;
		case 74: goto st74;
		case 76: goto st76;
	default: break;
	}

	if ( ++p == pe )
		goto _test_eof;
_resume:
	switch (  stomp->cs )
	{
st1:
	if ( ++p == pe )
		goto _test_eof1;
case 1:
	switch( (*p) ) {
		case 65: goto st2;
		case 66: goto st15;
		case 67: goto st20;
		case 68: goto st31;
		case 78: goto st41;
		case 83: goto st45;
		case 85: goto st61;
	}
	goto st0;
st0:
 stomp->cs = 0;
	goto _out;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
	switch( (*p) ) {
		case 66: goto st3;
		case 67: goto st73;
	}
	goto st0;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
	if ( (*p) == 79 )
		goto st4;
	goto st0;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
	if ( (*p) == 82 )
		goto st5;
	goto st0;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
	if ( (*p) == 84 )
		goto st6;
	goto st0;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
	if ( (*p) == 10 )
		goto tr13;
	goto st0;
tr13:
#line 54 "stomp.rl"
	{ string_init(&stomp->command, "ABORT", 5);        stomp->command_cb = &client_cmd_abortTransaction; }
	goto st7;
tr31:
#line 52 "stomp.rl"
	{ string_init(&stomp->command, "BEGIN", 5);        stomp->command_cb = &client_cmd_beginTransaction; }
	goto st7;
tr38:
#line 53 "stomp.rl"
	{ string_init(&stomp->command, "COMMIT", 6);       stomp->command_cb = &client_cmd_commitTransaction; }
	goto st7;
tr43:
#line 58 "stomp.rl"
	{ string_init(&stomp->command, "CONNECT", 7);      stomp->command_cb = &client_cmd_connect; }
	goto st7;
tr53:
#line 57 "stomp.rl"
	{ string_init(&stomp->command, "DISCONNECT", 10);  stomp->command_cb = &client_cmd_disconnect; }
	goto st7;
tr57:
#line 56 "stomp.rl"
	{ string_init(&stomp->command, "NACK", 4);         stomp->command_cb = &client_cmd_nack; }
	goto st7;
tr63:
#line 49 "stomp.rl"
	{ string_init(&stomp->command, "SEND", 4);         stomp->command_cb = &client_cmd_send; }
	goto st7;
tr67:
#line 59 "stomp.rl"
	{ string_init(&stomp->command, "STOMP", 5);        stomp->command_cb = &client_cmd_stomp; }
	goto st7;
tr75:
#line 50 "stomp.rl"
	{ string_init(&stomp->command, "SUBSCRIBE", 9);    stomp->command_cb = &client_cmd_subscribe; }
	goto st7;
tr86:
#line 51 "stomp.rl"
	{ string_init(&stomp->command, "UNSUBSCRIBE", 11); stomp->command_cb = &client_cmd_unsubscribe; }
	goto st7;
tr89:
#line 55 "stomp.rl"
	{ string_init(&stomp->command, "ACK", 3);          stomp->command_cb = &client_cmd_ack; }
	goto st7;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
#line 196 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr15;
	goto tr14;
tr14:
#line 14 "stomp.rl"
	{ stomp->mark = p; STOMP_DEBUG(("string begin %c", (*p))); }
	goto st8;
tr23:
#line 71 "stomp.rl"
	{ object_put_zerocopy(stomp->headers, stomp->name.str, &stomp->value); 
						 STOMP_DEBUG(("name=%s", stomp->name.str)); 
						 STOMP_DEBUG(("value=%s", stomp->value.str));
						 STOMP_DEBUG((""));
			             string_init(&stomp->name, 0, 0);
						 string_init(&stomp->value, 0, 0); 
					    }
#line 14 "stomp.rl"
	{ stomp->mark = p; STOMP_DEBUG(("string begin %c", (*p))); }
	goto st8;
tr87:
#line 6 "stomp.rl"
	{
		switch((*p)) {
			case '\\':      string_buffer_appendN(&stomp->buffer, (*p),   1); break;
			case 'n':       string_buffer_appendN(&stomp->buffer, '\n', 1); break;
			case 'c':       string_buffer_appendN(&stomp->buffer, ':', 1); break;
		}
    }
#line 14 "stomp.rl"
	{ stomp->mark = p; STOMP_DEBUG(("string begin %c", (*p))); }
	goto st8;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
#line 226 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto st9;
		case 58: goto st9;
		case 92: goto st72;
	}
	if ( 0 <= (*p) )
		goto st8;
	goto st0;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
#line 44 "stomp.rl"
	{ p--;}
#line 239 "clientfsm.c"
	if ( (*p) == 58 )
		goto tr19;
	goto st0;
tr19:
#line 17 "stomp.rl"
	{
	    STOMP_DEBUG(("string end %c", (*p)));
		if (p - stomp->mark > 0) {
			string_buffer_appendLen(&stomp->buffer, stomp->mark, (p - stomp->mark));
        }
    }
#line 69 "stomp.rl"
	{ string_buffer_release(&stomp->buffer, &stomp->name); STOMP_DEBUG(("name=%s", stomp->name.str)); }
	goto st10;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
#line 255 "clientfsm.c"
	if ( (*p) == 10 )
		goto st0;
	goto tr20;
tr20:
#line 14 "stomp.rl"
	{ stomp->mark = p; STOMP_DEBUG(("string begin %c", (*p))); }
	goto st11;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
#line 265 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr22;
	goto st11;
tr22:
#line 17 "stomp.rl"
	{
	    STOMP_DEBUG(("string end %c", (*p)));
		if (p - stomp->mark > 0) {
			string_buffer_appendLen(&stomp->buffer, stomp->mark, (p - stomp->mark));
        }
    }
#line 70 "stomp.rl"
	{ string_buffer_release(&stomp->buffer, &stomp->value); STOMP_DEBUG(("value=%s", stomp->value.str));}
	goto st12;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
#line 281 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr24;
	goto tr23;
tr15:
#line 24 "stomp.rl"
	{
	    { stomp->stack[ stomp->top++] = 13; goto st76;}
    }
	goto st13;
tr24:
#line 71 "stomp.rl"
	{ object_put_zerocopy(stomp->headers, stomp->name.str, &stomp->value); 
						 STOMP_DEBUG(("name=%s", stomp->name.str)); 
						 STOMP_DEBUG(("value=%s", stomp->value.str));
						 STOMP_DEBUG((""));
			             string_init(&stomp->name, 0, 0);
						 string_init(&stomp->value, 0, 0); 
					    }
#line 24 "stomp.rl"
	{
	    { stomp->stack[ stomp->top++] = 13; goto st76;}
    }
	goto st13;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
#line 305 "clientfsm.c"
	if ( (*p) == 0 )
		goto tr25;
	goto st0;
tr25:
#line 28 "stomp.rl"
	{
	    stomp_executeCommand(stomp);
	}
	goto st75;
st75:
	if ( ++p == pe )
		goto _test_eof75;
case 75:
#line 317 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto st14;
		case 65: goto st2;
		case 66: goto st15;
		case 67: goto st20;
		case 68: goto st31;
		case 78: goto st41;
		case 83: goto st45;
		case 85: goto st61;
	}
	goto st0;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
	switch( (*p) ) {
		case 10: goto st14;
		case 65: goto st2;
		case 66: goto st15;
		case 67: goto st20;
		case 68: goto st31;
		case 78: goto st41;
		case 83: goto st45;
		case 85: goto st61;
	}
	goto st0;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
	if ( (*p) == 69 )
		goto st16;
	goto st0;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
	if ( (*p) == 71 )
		goto st17;
	goto st0;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
	if ( (*p) == 73 )
		goto st18;
	goto st0;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
	if ( (*p) == 78 )
		goto st19;
	goto st0;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
	if ( (*p) == 10 )
		goto tr31;
	goto st0;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
	if ( (*p) == 79 )
		goto st21;
	goto st0;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
	switch( (*p) ) {
		case 77: goto st22;
		case 78: goto st26;
	}
	goto st0;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
	if ( (*p) == 77 )
		goto st23;
	goto st0;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
	if ( (*p) == 73 )
		goto st24;
	goto st0;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
	if ( (*p) == 84 )
		goto st25;
	goto st0;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
	if ( (*p) == 10 )
		goto tr38;
	goto st0;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
	if ( (*p) == 78 )
		goto st27;
	goto st0;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
	if ( (*p) == 69 )
		goto st28;
	goto st0;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
	if ( (*p) == 67 )
		goto st29;
	goto st0;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
	if ( (*p) == 84 )
		goto st30;
	goto st0;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
	if ( (*p) == 10 )
		goto tr43;
	goto st0;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
	if ( (*p) == 73 )
		goto st32;
	goto st0;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
	if ( (*p) == 83 )
		goto st33;
	goto st0;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
	if ( (*p) == 67 )
		goto st34;
	goto st0;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
	if ( (*p) == 79 )
		goto st35;
	goto st0;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
	if ( (*p) == 78 )
		goto st36;
	goto st0;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
	if ( (*p) == 78 )
		goto st37;
	goto st0;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
	if ( (*p) == 69 )
		goto st38;
	goto st0;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
	if ( (*p) == 67 )
		goto st39;
	goto st0;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
	if ( (*p) == 84 )
		goto st40;
	goto st0;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
	if ( (*p) == 10 )
		goto tr53;
	goto st0;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
	if ( (*p) == 65 )
		goto st42;
	goto st0;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
	if ( (*p) == 67 )
		goto st43;
	goto st0;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
	if ( (*p) == 75 )
		goto st44;
	goto st0;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
	if ( (*p) == 10 )
		goto tr57;
	goto st0;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
	switch( (*p) ) {
		case 69: goto st46;
		case 84: goto st49;
		case 85: goto st53;
	}
	goto st0;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
	if ( (*p) == 78 )
		goto st47;
	goto st0;
st47:
	if ( ++p == pe )
		goto _test_eof47;
case 47:
	if ( (*p) == 68 )
		goto st48;
	goto st0;
st48:
	if ( ++p == pe )
		goto _test_eof48;
case 48:
	if ( (*p) == 10 )
		goto tr63;
	goto st0;
st49:
	if ( ++p == pe )
		goto _test_eof49;
case 49:
	if ( (*p) == 79 )
		goto st50;
	goto st0;
st50:
	if ( ++p == pe )
		goto _test_eof50;
case 50:
	if ( (*p) == 77 )
		goto st51;
	goto st0;
st51:
	if ( ++p == pe )
		goto _test_eof51;
case 51:
	if ( (*p) == 80 )
		goto st52;
	goto st0;
st52:
	if ( ++p == pe )
		goto _test_eof52;
case 52:
	if ( (*p) == 10 )
		goto tr67;
	goto st0;
st53:
	if ( ++p == pe )
		goto _test_eof53;
case 53:
	if ( (*p) == 66 )
		goto st54;
	goto st0;
st54:
	if ( ++p == pe )
		goto _test_eof54;
case 54:
	if ( (*p) == 83 )
		goto st55;
	goto st0;
st55:
	if ( ++p == pe )
		goto _test_eof55;
case 55:
	if ( (*p) == 67 )
		goto st56;
	goto st0;
st56:
	if ( ++p == pe )
		goto _test_eof56;
case 56:
	if ( (*p) == 82 )
		goto st57;
	goto st0;
st57:
	if ( ++p == pe )
		goto _test_eof57;
case 57:
	if ( (*p) == 73 )
		goto st58;
	goto st0;
st58:
	if ( ++p == pe )
		goto _test_eof58;
case 58:
	if ( (*p) == 66 )
		goto st59;
	goto st0;
st59:
	if ( ++p == pe )
		goto _test_eof59;
case 59:
	if ( (*p) == 69 )
		goto st60;
	goto st0;
st60:
	if ( ++p == pe )
		goto _test_eof60;
case 60:
	if ( (*p) == 10 )
		goto tr75;
	goto st0;
st61:
	if ( ++p == pe )
		goto _test_eof61;
case 61:
	if ( (*p) == 78 )
		goto st62;
	goto st0;
st62:
	if ( ++p == pe )
		goto _test_eof62;
case 62:
	if ( (*p) == 83 )
		goto st63;
	goto st0;
st63:
	if ( ++p == pe )
		goto _test_eof63;
case 63:
	if ( (*p) == 85 )
		goto st64;
	goto st0;
st64:
	if ( ++p == pe )
		goto _test_eof64;
case 64:
	if ( (*p) == 66 )
		goto st65;
	goto st0;
st65:
	if ( ++p == pe )
		goto _test_eof65;
case 65:
	if ( (*p) == 83 )
		goto st66;
	goto st0;
st66:
	if ( ++p == pe )
		goto _test_eof66;
case 66:
	if ( (*p) == 67 )
		goto st67;
	goto st0;
st67:
	if ( ++p == pe )
		goto _test_eof67;
case 67:
	if ( (*p) == 82 )
		goto st68;
	goto st0;
st68:
	if ( ++p == pe )
		goto _test_eof68;
case 68:
	if ( (*p) == 73 )
		goto st69;
	goto st0;
st69:
	if ( ++p == pe )
		goto _test_eof69;
case 69:
	if ( (*p) == 66 )
		goto st70;
	goto st0;
st70:
	if ( ++p == pe )
		goto _test_eof70;
case 70:
	if ( (*p) == 69 )
		goto st71;
	goto st0;
st71:
	if ( ++p == pe )
		goto _test_eof71;
case 71:
	if ( (*p) == 10 )
		goto tr86;
	goto st0;
st72:
	if ( ++p == pe )
		goto _test_eof72;
case 72:
	switch( (*p) ) {
		case 34: goto tr87;
		case 92: goto tr87;
		case 99: goto tr87;
		case 110: goto tr87;
	}
	goto st0;
st73:
	if ( ++p == pe )
		goto _test_eof73;
case 73:
	if ( (*p) == 75 )
		goto st74;
	goto st0;
st74:
	if ( ++p == pe )
		goto _test_eof74;
case 74:
	if ( (*p) == 10 )
		goto tr89;
	goto st0;
tr90:
#line 89 "stomp.rl"
	{ p = stomp_readBody(stomp, p, pe); if(pe != p) { { stomp->cs =  stomp->stack[-- stomp->top];goto _again;} } else { p--; } }
	goto st76;
st76:
	if ( ++p == pe )
		goto _test_eof76;
case 76:
#line 779 "clientfsm.c"
	goto tr90;
	}
	_test_eof1:  stomp->cs = 1; goto _test_eof; 
	_test_eof2:  stomp->cs = 2; goto _test_eof; 
	_test_eof3:  stomp->cs = 3; goto _test_eof; 
	_test_eof4:  stomp->cs = 4; goto _test_eof; 
	_test_eof5:  stomp->cs = 5; goto _test_eof; 
	_test_eof6:  stomp->cs = 6; goto _test_eof; 
	_test_eof7:  stomp->cs = 7; goto _test_eof; 
	_test_eof8:  stomp->cs = 8; goto _test_eof; 
	_test_eof9:  stomp->cs = 9; goto _test_eof; 
	_test_eof10:  stomp->cs = 10; goto _test_eof; 
	_test_eof11:  stomp->cs = 11; goto _test_eof; 
	_test_eof12:  stomp->cs = 12; goto _test_eof; 
	_test_eof13:  stomp->cs = 13; goto _test_eof; 
	_test_eof75:  stomp->cs = 75; goto _test_eof; 
	_test_eof14:  stomp->cs = 14; goto _test_eof; 
	_test_eof15:  stomp->cs = 15; goto _test_eof; 
	_test_eof16:  stomp->cs = 16; goto _test_eof; 
	_test_eof17:  stomp->cs = 17; goto _test_eof; 
	_test_eof18:  stomp->cs = 18; goto _test_eof; 
	_test_eof19:  stomp->cs = 19; goto _test_eof; 
	_test_eof20:  stomp->cs = 20; goto _test_eof; 
	_test_eof21:  stomp->cs = 21; goto _test_eof; 
	_test_eof22:  stomp->cs = 22; goto _test_eof; 
	_test_eof23:  stomp->cs = 23; goto _test_eof; 
	_test_eof24:  stomp->cs = 24; goto _test_eof; 
	_test_eof25:  stomp->cs = 25; goto _test_eof; 
	_test_eof26:  stomp->cs = 26; goto _test_eof; 
	_test_eof27:  stomp->cs = 27; goto _test_eof; 
	_test_eof28:  stomp->cs = 28; goto _test_eof; 
	_test_eof29:  stomp->cs = 29; goto _test_eof; 
	_test_eof30:  stomp->cs = 30; goto _test_eof; 
	_test_eof31:  stomp->cs = 31; goto _test_eof; 
	_test_eof32:  stomp->cs = 32; goto _test_eof; 
	_test_eof33:  stomp->cs = 33; goto _test_eof; 
	_test_eof34:  stomp->cs = 34; goto _test_eof; 
	_test_eof35:  stomp->cs = 35; goto _test_eof; 
	_test_eof36:  stomp->cs = 36; goto _test_eof; 
	_test_eof37:  stomp->cs = 37; goto _test_eof; 
	_test_eof38:  stomp->cs = 38; goto _test_eof; 
	_test_eof39:  stomp->cs = 39; goto _test_eof; 
	_test_eof40:  stomp->cs = 40; goto _test_eof; 
	_test_eof41:  stomp->cs = 41; goto _test_eof; 
	_test_eof42:  stomp->cs = 42; goto _test_eof; 
	_test_eof43:  stomp->cs = 43; goto _test_eof; 
	_test_eof44:  stomp->cs = 44; goto _test_eof; 
	_test_eof45:  stomp->cs = 45; goto _test_eof; 
	_test_eof46:  stomp->cs = 46; goto _test_eof; 
	_test_eof47:  stomp->cs = 47; goto _test_eof; 
	_test_eof48:  stomp->cs = 48; goto _test_eof; 
	_test_eof49:  stomp->cs = 49; goto _test_eof; 
	_test_eof50:  stomp->cs = 50; goto _test_eof; 
	_test_eof51:  stomp->cs = 51; goto _test_eof; 
	_test_eof52:  stomp->cs = 52; goto _test_eof; 
	_test_eof53:  stomp->cs = 53; goto _test_eof; 
	_test_eof54:  stomp->cs = 54; goto _test_eof; 
	_test_eof55:  stomp->cs = 55; goto _test_eof; 
	_test_eof56:  stomp->cs = 56; goto _test_eof; 
	_test_eof57:  stomp->cs = 57; goto _test_eof; 
	_test_eof58:  stomp->cs = 58; goto _test_eof; 
	_test_eof59:  stomp->cs = 59; goto _test_eof; 
	_test_eof60:  stomp->cs = 60; goto _test_eof; 
	_test_eof61:  stomp->cs = 61; goto _test_eof; 
	_test_eof62:  stomp->cs = 62; goto _test_eof; 
	_test_eof63:  stomp->cs = 63; goto _test_eof; 
	_test_eof64:  stomp->cs = 64; goto _test_eof; 
	_test_eof65:  stomp->cs = 65; goto _test_eof; 
	_test_eof66:  stomp->cs = 66; goto _test_eof; 
	_test_eof67:  stomp->cs = 67; goto _test_eof; 
	_test_eof68:  stomp->cs = 68; goto _test_eof; 
	_test_eof69:  stomp->cs = 69; goto _test_eof; 
	_test_eof70:  stomp->cs = 70; goto _test_eof; 
	_test_eof71:  stomp->cs = 71; goto _test_eof; 
	_test_eof72:  stomp->cs = 72; goto _test_eof; 
	_test_eof73:  stomp->cs = 73; goto _test_eof; 
	_test_eof74:  stomp->cs = 74; goto _test_eof; 
	_test_eof76:  stomp->cs = 76; goto _test_eof; 

	_test_eof: {}
	_out: {}
	}

#line 35 "clientfsm.rl"
}

int stomp_client_finish(stomp_t *stomp) {
	if ( stomp->cs == stomp_client_fsm_error ) {
		return -1;
	}
	if ( stomp->cs >= stomp_client_fsm_first_final ) {
		return 1;
	}
	return 0;
}

#ifdef __cplusplus
}
#endif
