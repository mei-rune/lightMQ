
#line 1 "clientfsm.rl"

#include "stomp.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define cmd_protocolError stomp_client_cmd_protocolError


#line 19 "clientfsm.rl"



#line 2 "clientfsm.c"
static const int stomp_client_fsm_start = 1;
static const int stomp_client_fsm_first_final = 331;
static const int stomp_client_fsm_error = 0;

static const int stomp_client_fsm_en_BODY = 332;
static const int stomp_client_fsm_en_main = 1;


#line 22 "clientfsm.rl"


void stomp_client_init(stomp_t *stomp) {

	STOMP_INIT(stomp);

	
#line 9 "clientfsm.c"
	{
	 stomp->cs = stomp_client_fsm_start;
	 stomp->top = 0;
	}

#line 29 "clientfsm.rl"
}

int stomp_client_execute(stomp_t *stomp, const char *data, int len, int isEof) {
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
		case 2: goto st2;
		case 3: goto st3;
		case 4: goto st4;
		case 0: goto st0;
		case 5: goto st5;
		case 6: goto st6;
		case 7: goto st7;
		case 8: goto st8;
		case 9: goto st9;
		case 10: goto st10;
		case 11: goto st11;
		case 12: goto st12;
		case 13: goto st13;
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
		case 75: goto st75;
		case 76: goto st76;
		case 77: goto st77;
		case 78: goto st78;
		case 79: goto st79;
		case 80: goto st80;
		case 81: goto st81;
		case 82: goto st82;
		case 83: goto st83;
		case 84: goto st84;
		case 85: goto st85;
		case 86: goto st86;
		case 87: goto st87;
		case 88: goto st88;
		case 89: goto st89;
		case 90: goto st90;
		case 91: goto st91;
		case 92: goto st92;
		case 93: goto st93;
		case 94: goto st94;
		case 95: goto st95;
		case 96: goto st96;
		case 97: goto st97;
		case 98: goto st98;
		case 99: goto st99;
		case 100: goto st100;
		case 101: goto st101;
		case 102: goto st102;
		case 103: goto st103;
		case 104: goto st104;
		case 105: goto st105;
		case 106: goto st106;
		case 107: goto st107;
		case 108: goto st108;
		case 109: goto st109;
		case 110: goto st110;
		case 111: goto st111;
		case 112: goto st112;
		case 113: goto st113;
		case 114: goto st114;
		case 115: goto st115;
		case 116: goto st116;
		case 117: goto st117;
		case 118: goto st118;
		case 119: goto st119;
		case 120: goto st120;
		case 121: goto st121;
		case 122: goto st122;
		case 123: goto st123;
		case 124: goto st124;
		case 125: goto st125;
		case 126: goto st126;
		case 127: goto st127;
		case 128: goto st128;
		case 129: goto st129;
		case 130: goto st130;
		case 131: goto st131;
		case 132: goto st132;
		case 133: goto st133;
		case 134: goto st134;
		case 135: goto st135;
		case 136: goto st136;
		case 137: goto st137;
		case 138: goto st138;
		case 139: goto st139;
		case 140: goto st140;
		case 141: goto st141;
		case 142: goto st142;
		case 143: goto st143;
		case 144: goto st144;
		case 145: goto st145;
		case 146: goto st146;
		case 147: goto st147;
		case 148: goto st148;
		case 149: goto st149;
		case 150: goto st150;
		case 151: goto st151;
		case 152: goto st152;
		case 153: goto st153;
		case 154: goto st154;
		case 155: goto st155;
		case 156: goto st156;
		case 157: goto st157;
		case 158: goto st158;
		case 159: goto st159;
		case 160: goto st160;
		case 161: goto st161;
		case 162: goto st162;
		case 163: goto st163;
		case 164: goto st164;
		case 165: goto st165;
		case 166: goto st166;
		case 167: goto st167;
		case 168: goto st168;
		case 169: goto st169;
		case 170: goto st170;
		case 171: goto st171;
		case 172: goto st172;
		case 173: goto st173;
		case 174: goto st174;
		case 175: goto st175;
		case 176: goto st176;
		case 177: goto st177;
		case 178: goto st178;
		case 179: goto st179;
		case 180: goto st180;
		case 181: goto st181;
		case 182: goto st182;
		case 183: goto st183;
		case 184: goto st184;
		case 185: goto st185;
		case 186: goto st186;
		case 187: goto st187;
		case 188: goto st188;
		case 189: goto st189;
		case 190: goto st190;
		case 191: goto st191;
		case 192: goto st192;
		case 193: goto st193;
		case 194: goto st194;
		case 195: goto st195;
		case 196: goto st196;
		case 197: goto st197;
		case 198: goto st198;
		case 199: goto st199;
		case 200: goto st200;
		case 201: goto st201;
		case 202: goto st202;
		case 203: goto st203;
		case 204: goto st204;
		case 205: goto st205;
		case 206: goto st206;
		case 207: goto st207;
		case 208: goto st208;
		case 209: goto st209;
		case 210: goto st210;
		case 211: goto st211;
		case 212: goto st212;
		case 213: goto st213;
		case 214: goto st214;
		case 215: goto st215;
		case 216: goto st216;
		case 217: goto st217;
		case 218: goto st218;
		case 219: goto st219;
		case 220: goto st220;
		case 221: goto st221;
		case 222: goto st222;
		case 223: goto st223;
		case 224: goto st224;
		case 225: goto st225;
		case 226: goto st226;
		case 227: goto st227;
		case 228: goto st228;
		case 229: goto st229;
		case 230: goto st230;
		case 231: goto st231;
		case 232: goto st232;
		case 233: goto st233;
		case 234: goto st234;
		case 235: goto st235;
		case 236: goto st236;
		case 237: goto st237;
		case 238: goto st238;
		case 239: goto st239;
		case 240: goto st240;
		case 241: goto st241;
		case 242: goto st242;
		case 243: goto st243;
		case 244: goto st244;
		case 245: goto st245;
		case 246: goto st246;
		case 247: goto st247;
		case 248: goto st248;
		case 249: goto st249;
		case 250: goto st250;
		case 251: goto st251;
		case 252: goto st252;
		case 253: goto st253;
		case 254: goto st254;
		case 255: goto st255;
		case 256: goto st256;
		case 257: goto st257;
		case 258: goto st258;
		case 259: goto st259;
		case 260: goto st260;
		case 261: goto st261;
		case 262: goto st262;
		case 263: goto st263;
		case 264: goto st264;
		case 331: goto st331;
		case 265: goto st265;
		case 266: goto st266;
		case 267: goto st267;
		case 268: goto st268;
		case 269: goto st269;
		case 270: goto st270;
		case 271: goto st271;
		case 272: goto st272;
		case 273: goto st273;
		case 274: goto st274;
		case 275: goto st275;
		case 276: goto st276;
		case 277: goto st277;
		case 278: goto st278;
		case 279: goto st279;
		case 280: goto st280;
		case 281: goto st281;
		case 282: goto st282;
		case 283: goto st283;
		case 284: goto st284;
		case 285: goto st285;
		case 286: goto st286;
		case 287: goto st287;
		case 288: goto st288;
		case 289: goto st289;
		case 290: goto st290;
		case 291: goto st291;
		case 292: goto st292;
		case 293: goto st293;
		case 294: goto st294;
		case 295: goto st295;
		case 296: goto st296;
		case 297: goto st297;
		case 298: goto st298;
		case 299: goto st299;
		case 300: goto st300;
		case 301: goto st301;
		case 302: goto st302;
		case 303: goto st303;
		case 304: goto st304;
		case 305: goto st305;
		case 306: goto st306;
		case 307: goto st307;
		case 308: goto st308;
		case 309: goto st309;
		case 310: goto st310;
		case 311: goto st311;
		case 312: goto st312;
		case 313: goto st313;
		case 314: goto st314;
		case 315: goto st315;
		case 316: goto st316;
		case 317: goto st317;
		case 318: goto st318;
		case 319: goto st319;
		case 320: goto st320;
		case 321: goto st321;
		case 322: goto st322;
		case 323: goto st323;
		case 324: goto st324;
		case 325: goto st325;
		case 326: goto st326;
		case 327: goto st327;
		case 328: goto st328;
		case 329: goto st329;
		case 330: goto st330;
		case 332: goto st332;
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
		case 10: goto tr1;
		case 65: goto tr2;
		case 66: goto tr3;
		case 67: goto tr4;
		case 68: goto tr5;
		case 78: goto tr6;
		case 83: goto tr7;
		case 85: goto tr8;
	}
	goto tr0;
tr0:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st2;
st2:
	if ( ++p == pe )
		goto _test_eof2;
case 2:
#line 385 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr9;
	goto tr0;
tr9:
#line 115 "stomp.rl"
	{ stomp->msg.is_delete_cmd = true;
	                                          string_buffer_release(&stomp->buffer, &stomp->msg.command); 
	                                          stomp->msg.cb = &stomp_client_cmd_unknowCommand;
											 }
	goto st3;
tr282:
#line 84 "stomp.rl"
	{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "ABORT", 5);              
	                                          stomp->msg.cb = &stomp_client_cmd_abortTransaction; 
											  string_truncate(&stomp->buffer, 0);
											 }
	goto st3;
tr284:
#line 89 "stomp.rl"
	{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "ACK", 3);                
	                                          stomp->msg.cb = &stomp_client_cmd_ack; 
											  string_truncate(&stomp->buffer, 0);
											 }
	goto st3;
tr289:
#line 74 "stomp.rl"
	{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "BEGIN", 5);               
	                                          stomp->msg.cb = &stomp_client_cmd_beginTransaction; 
											  string_truncate(&stomp->buffer, 0);
											 }
	goto st3;
tr296:
#line 79 "stomp.rl"
	{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "COMMIT", 6);              
	                                          stomp->msg.cb = &stomp_client_cmd_commitTransaction; 
											  string_truncate(&stomp->buffer, 0);
											 }
	goto st3;
tr301:
#line 104 "stomp.rl"
	{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "CONNECT", 7);            
	                                          stomp->msg.cb = &stomp_client_cmd_connect; 
											  string_truncate(&stomp->buffer, 0);
											 }
	goto st3;
tr311:
#line 99 "stomp.rl"
	{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "DISCONNECT", 10);        
	                                          stomp->msg.cb = &stomp_client_cmd_disconnect; 
											  string_truncate(&stomp->buffer, 0);
											 }
	goto st3;
tr315:
#line 94 "stomp.rl"
	{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "NACK", 4);               
	                                          stomp->msg.cb = &stomp_client_cmd_nack; 
											  string_truncate(&stomp->buffer, 0);
											 }
	goto st3;
tr321:
#line 59 "stomp.rl"
	{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "SEND", 4);                
	                                          stomp->msg.cb = &stomp_client_cmd_send; 
											  string_truncate(&stomp->buffer, 0);
											 }
	goto st3;
tr325:
#line 109 "stomp.rl"
	{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "STOMP", 5);              
	                                          stomp->msg.cb = &stomp_client_cmd_stomp; 
											  string_truncate(&stomp->buffer, 0);
											 }
	goto st3;
tr333:
#line 64 "stomp.rl"
	{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "SUBSCRIBE", 9);           
	                                          stomp->msg.cb = &stomp_client_cmd_subscribe; 
											  string_truncate(&stomp->buffer, 0);
											 }
	goto st3;
tr344:
#line 69 "stomp.rl"
	{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "UNSUBSCRIBE", 11);        
	                                          stomp->msg.cb = &stomp_client_cmd_unsubscribe; 
											  string_truncate(&stomp->buffer, 0);
											 }
	goto st3;
st3:
	if ( ++p == pe )
		goto _test_eof3;
case 3:
#line 475 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr11;
	goto tr10;
tr10:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st4;
tr12:
#line 10 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	  if(stomp->buffer.len > 256) {
        stomp->msg.cb = &cmd_protocolError; 
        stomp_executeCommand(stomp); 
        goto failure; 
	  }	     
	}
	goto st4;
tr273:
#line 151 "stomp.rl"
	{ object_put_zerocopy(stomp->msg.headers, stomp->name.str, &stomp->value); 
						 STOMP_DEBUG(("name=%s", stomp->name.str)); 
						 STOMP_DEBUG(("value=%s", stomp->value.str));
						 STOMP_DEBUG((""));
			             string_init(&stomp->name, 0, 0);
						 string_init(&stomp->value, 0, 0); 
					    }
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st4;
tr345:
#line 19 "stomp.rl"
	{
		switch((*p)) {
			case '\\':      string_buffer_appendN(&stomp->buffer, (*p),   1); break;
			case 'n':       string_buffer_appendN(&stomp->buffer, '\n', 1); break;
			case 'c':       string_buffer_appendN(&stomp->buffer, ':', 1); break;
		}
    }
	goto st4;
st4:
	if ( ++p == pe )
		goto _test_eof4;
case 4:
#line 518 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto st5;
		case 58: goto st5;
		case 92: goto st330;
	}
	if ( 0 <= (*p) )
		goto tr12;
	goto tr1;
tr1:
#line 165 "stomp.rl"
	{ stomp->msg.cb = &cmd_protocolError;
	                                                               stomp_executeCommand(stomp); 
																   goto failure; }
	goto st0;
#line 531 "clientfsm.c"
st0:
 stomp->cs = 0;
	goto _out;
st5:
	if ( ++p == pe )
		goto _test_eof5;
case 5:
#line 50 "stomp.rl"
	{ p--;}
#line 539 "clientfsm.c"
	if ( (*p) == 58 )
		goto tr15;
	goto tr1;
tr15:
#line 149 "stomp.rl"
	{ string_buffer_release(&stomp->buffer, &stomp->name); STOMP_DEBUG(("name=%s", stomp->name.str)); }
	goto st6;
st6:
	if ( ++p == pe )
		goto _test_eof6;
case 6:
#line 549 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr1;
	goto tr16;
tr16:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st7;
st7:
	if ( ++p == pe )
		goto _test_eof7;
case 7:
#line 561 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr17;
tr17:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st8;
st8:
	if ( ++p == pe )
		goto _test_eof8;
case 8:
#line 573 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr19;
tr19:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st9;
st9:
	if ( ++p == pe )
		goto _test_eof9;
case 9:
#line 585 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr20;
tr20:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st10;
st10:
	if ( ++p == pe )
		goto _test_eof10;
case 10:
#line 597 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr21;
tr21:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st11;
st11:
	if ( ++p == pe )
		goto _test_eof11;
case 11:
#line 609 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr22;
tr22:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st12;
st12:
	if ( ++p == pe )
		goto _test_eof12;
case 12:
#line 621 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr23;
tr23:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st13;
st13:
	if ( ++p == pe )
		goto _test_eof13;
case 13:
#line 633 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr24;
tr24:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st14;
st14:
	if ( ++p == pe )
		goto _test_eof14;
case 14:
#line 645 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr25;
tr25:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st15;
st15:
	if ( ++p == pe )
		goto _test_eof15;
case 15:
#line 657 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr26;
tr26:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st16;
st16:
	if ( ++p == pe )
		goto _test_eof16;
case 16:
#line 669 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr27;
tr27:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st17;
st17:
	if ( ++p == pe )
		goto _test_eof17;
case 17:
#line 681 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr28;
tr28:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st18;
st18:
	if ( ++p == pe )
		goto _test_eof18;
case 18:
#line 693 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr29;
tr29:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st19;
st19:
	if ( ++p == pe )
		goto _test_eof19;
case 19:
#line 705 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr30;
tr30:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st20;
st20:
	if ( ++p == pe )
		goto _test_eof20;
case 20:
#line 717 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr31;
tr31:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st21;
st21:
	if ( ++p == pe )
		goto _test_eof21;
case 21:
#line 729 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr32;
tr32:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st22;
st22:
	if ( ++p == pe )
		goto _test_eof22;
case 22:
#line 741 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr33;
tr33:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st23;
st23:
	if ( ++p == pe )
		goto _test_eof23;
case 23:
#line 753 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr34;
tr34:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st24;
st24:
	if ( ++p == pe )
		goto _test_eof24;
case 24:
#line 765 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr35;
tr35:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st25;
st25:
	if ( ++p == pe )
		goto _test_eof25;
case 25:
#line 777 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr36;
tr36:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st26;
st26:
	if ( ++p == pe )
		goto _test_eof26;
case 26:
#line 789 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr37;
tr37:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st27;
st27:
	if ( ++p == pe )
		goto _test_eof27;
case 27:
#line 801 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr38;
tr38:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st28;
st28:
	if ( ++p == pe )
		goto _test_eof28;
case 28:
#line 813 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr39;
tr39:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st29;
st29:
	if ( ++p == pe )
		goto _test_eof29;
case 29:
#line 825 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr40;
tr40:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st30;
st30:
	if ( ++p == pe )
		goto _test_eof30;
case 30:
#line 837 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr41;
tr41:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st31;
st31:
	if ( ++p == pe )
		goto _test_eof31;
case 31:
#line 849 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr42;
tr42:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st32;
st32:
	if ( ++p == pe )
		goto _test_eof32;
case 32:
#line 861 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr43;
tr43:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st33;
st33:
	if ( ++p == pe )
		goto _test_eof33;
case 33:
#line 873 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr44;
tr44:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st34;
st34:
	if ( ++p == pe )
		goto _test_eof34;
case 34:
#line 885 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr45;
tr45:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st35;
st35:
	if ( ++p == pe )
		goto _test_eof35;
case 35:
#line 897 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr46;
tr46:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st36;
st36:
	if ( ++p == pe )
		goto _test_eof36;
case 36:
#line 909 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr47;
tr47:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st37;
st37:
	if ( ++p == pe )
		goto _test_eof37;
case 37:
#line 921 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr48;
tr48:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st38;
st38:
	if ( ++p == pe )
		goto _test_eof38;
case 38:
#line 933 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr49;
tr49:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st39;
st39:
	if ( ++p == pe )
		goto _test_eof39;
case 39:
#line 945 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr50;
tr50:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st40;
st40:
	if ( ++p == pe )
		goto _test_eof40;
case 40:
#line 957 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr51;
tr51:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st41;
st41:
	if ( ++p == pe )
		goto _test_eof41;
case 41:
#line 969 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr52;
tr52:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st42;
st42:
	if ( ++p == pe )
		goto _test_eof42;
case 42:
#line 981 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr53;
tr53:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st43;
st43:
	if ( ++p == pe )
		goto _test_eof43;
case 43:
#line 993 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr54;
tr54:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st44;
st44:
	if ( ++p == pe )
		goto _test_eof44;
case 44:
#line 1005 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr55;
tr55:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st45;
st45:
	if ( ++p == pe )
		goto _test_eof45;
case 45:
#line 1017 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr56;
tr56:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st46;
st46:
	if ( ++p == pe )
		goto _test_eof46;
case 46:
#line 1029 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr57;
tr57:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st47;
st47:
	if ( ++p == pe )
		goto _test_eof47;
case 47:
#line 1041 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr58;
tr58:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st48;
st48:
	if ( ++p == pe )
		goto _test_eof48;
case 48:
#line 1053 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr59;
tr59:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st49;
st49:
	if ( ++p == pe )
		goto _test_eof49;
case 49:
#line 1065 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr60;
tr60:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st50;
st50:
	if ( ++p == pe )
		goto _test_eof50;
case 50:
#line 1077 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr61;
tr61:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st51;
st51:
	if ( ++p == pe )
		goto _test_eof51;
case 51:
#line 1089 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr62;
tr62:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st52;
st52:
	if ( ++p == pe )
		goto _test_eof52;
case 52:
#line 1101 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr63;
tr63:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st53;
st53:
	if ( ++p == pe )
		goto _test_eof53;
case 53:
#line 1113 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr64;
tr64:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st54;
st54:
	if ( ++p == pe )
		goto _test_eof54;
case 54:
#line 1125 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr65;
tr65:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st55;
st55:
	if ( ++p == pe )
		goto _test_eof55;
case 55:
#line 1137 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr66;
tr66:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st56;
st56:
	if ( ++p == pe )
		goto _test_eof56;
case 56:
#line 1149 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr67;
tr67:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st57;
st57:
	if ( ++p == pe )
		goto _test_eof57;
case 57:
#line 1161 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr68;
tr68:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st58;
st58:
	if ( ++p == pe )
		goto _test_eof58;
case 58:
#line 1173 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr69;
tr69:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st59;
st59:
	if ( ++p == pe )
		goto _test_eof59;
case 59:
#line 1185 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr70;
tr70:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st60;
st60:
	if ( ++p == pe )
		goto _test_eof60;
case 60:
#line 1197 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr71;
tr71:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st61;
st61:
	if ( ++p == pe )
		goto _test_eof61;
case 61:
#line 1209 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr72;
tr72:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st62;
st62:
	if ( ++p == pe )
		goto _test_eof62;
case 62:
#line 1221 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr73;
tr73:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st63;
st63:
	if ( ++p == pe )
		goto _test_eof63;
case 63:
#line 1233 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr74;
tr74:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st64;
st64:
	if ( ++p == pe )
		goto _test_eof64;
case 64:
#line 1245 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr75;
tr75:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st65;
st65:
	if ( ++p == pe )
		goto _test_eof65;
case 65:
#line 1257 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr76;
tr76:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st66;
st66:
	if ( ++p == pe )
		goto _test_eof66;
case 66:
#line 1269 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr77;
tr77:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st67;
st67:
	if ( ++p == pe )
		goto _test_eof67;
case 67:
#line 1281 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr78;
tr78:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st68;
st68:
	if ( ++p == pe )
		goto _test_eof68;
case 68:
#line 1293 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr79;
tr79:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st69;
st69:
	if ( ++p == pe )
		goto _test_eof69;
case 69:
#line 1305 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr80;
tr80:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st70;
st70:
	if ( ++p == pe )
		goto _test_eof70;
case 70:
#line 1317 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr81;
tr81:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st71;
st71:
	if ( ++p == pe )
		goto _test_eof71;
case 71:
#line 1329 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr82;
tr82:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st72;
st72:
	if ( ++p == pe )
		goto _test_eof72;
case 72:
#line 1341 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr83;
tr83:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st73;
st73:
	if ( ++p == pe )
		goto _test_eof73;
case 73:
#line 1353 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr84;
tr84:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st74;
st74:
	if ( ++p == pe )
		goto _test_eof74;
case 74:
#line 1365 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr85;
tr85:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st75;
st75:
	if ( ++p == pe )
		goto _test_eof75;
case 75:
#line 1377 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr86;
tr86:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st76;
st76:
	if ( ++p == pe )
		goto _test_eof76;
case 76:
#line 1389 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr87;
tr87:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st77;
st77:
	if ( ++p == pe )
		goto _test_eof77;
case 77:
#line 1401 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr88;
tr88:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st78;
st78:
	if ( ++p == pe )
		goto _test_eof78;
case 78:
#line 1413 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr89;
tr89:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st79;
st79:
	if ( ++p == pe )
		goto _test_eof79;
case 79:
#line 1425 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr90;
tr90:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st80;
st80:
	if ( ++p == pe )
		goto _test_eof80;
case 80:
#line 1437 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr91;
tr91:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st81;
st81:
	if ( ++p == pe )
		goto _test_eof81;
case 81:
#line 1449 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr92;
tr92:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st82;
st82:
	if ( ++p == pe )
		goto _test_eof82;
case 82:
#line 1461 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr93;
tr93:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st83;
st83:
	if ( ++p == pe )
		goto _test_eof83;
case 83:
#line 1473 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr94;
tr94:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st84;
st84:
	if ( ++p == pe )
		goto _test_eof84;
case 84:
#line 1485 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr95;
tr95:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st85;
st85:
	if ( ++p == pe )
		goto _test_eof85;
case 85:
#line 1497 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr96;
tr96:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st86;
st86:
	if ( ++p == pe )
		goto _test_eof86;
case 86:
#line 1509 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr97;
tr97:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st87;
st87:
	if ( ++p == pe )
		goto _test_eof87;
case 87:
#line 1521 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr98;
tr98:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st88;
st88:
	if ( ++p == pe )
		goto _test_eof88;
case 88:
#line 1533 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr99;
tr99:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st89;
st89:
	if ( ++p == pe )
		goto _test_eof89;
case 89:
#line 1545 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr100;
tr100:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st90;
st90:
	if ( ++p == pe )
		goto _test_eof90;
case 90:
#line 1557 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr101;
tr101:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st91;
st91:
	if ( ++p == pe )
		goto _test_eof91;
case 91:
#line 1569 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr102;
tr102:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st92;
st92:
	if ( ++p == pe )
		goto _test_eof92;
case 92:
#line 1581 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr103;
tr103:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st93;
st93:
	if ( ++p == pe )
		goto _test_eof93;
case 93:
#line 1593 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr104;
tr104:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st94;
st94:
	if ( ++p == pe )
		goto _test_eof94;
case 94:
#line 1605 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr105;
tr105:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st95;
st95:
	if ( ++p == pe )
		goto _test_eof95;
case 95:
#line 1617 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr106;
tr106:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st96;
st96:
	if ( ++p == pe )
		goto _test_eof96;
case 96:
#line 1629 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr107;
tr107:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st97;
st97:
	if ( ++p == pe )
		goto _test_eof97;
case 97:
#line 1641 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr108;
tr108:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st98;
st98:
	if ( ++p == pe )
		goto _test_eof98;
case 98:
#line 1653 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr109;
tr109:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st99;
st99:
	if ( ++p == pe )
		goto _test_eof99;
case 99:
#line 1665 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr110;
tr110:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st100;
st100:
	if ( ++p == pe )
		goto _test_eof100;
case 100:
#line 1677 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr111;
tr111:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st101;
st101:
	if ( ++p == pe )
		goto _test_eof101;
case 101:
#line 1689 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr112;
tr112:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st102;
st102:
	if ( ++p == pe )
		goto _test_eof102;
case 102:
#line 1701 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr113;
tr113:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st103;
st103:
	if ( ++p == pe )
		goto _test_eof103;
case 103:
#line 1713 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr114;
tr114:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st104;
st104:
	if ( ++p == pe )
		goto _test_eof104;
case 104:
#line 1725 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr115;
tr115:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st105;
st105:
	if ( ++p == pe )
		goto _test_eof105;
case 105:
#line 1737 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr116;
tr116:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st106;
st106:
	if ( ++p == pe )
		goto _test_eof106;
case 106:
#line 1749 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr117;
tr117:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st107;
st107:
	if ( ++p == pe )
		goto _test_eof107;
case 107:
#line 1761 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr118;
tr118:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st108;
st108:
	if ( ++p == pe )
		goto _test_eof108;
case 108:
#line 1773 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr119;
tr119:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st109;
st109:
	if ( ++p == pe )
		goto _test_eof109;
case 109:
#line 1785 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr120;
tr120:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st110;
st110:
	if ( ++p == pe )
		goto _test_eof110;
case 110:
#line 1797 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr121;
tr121:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st111;
st111:
	if ( ++p == pe )
		goto _test_eof111;
case 111:
#line 1809 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr122;
tr122:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st112;
st112:
	if ( ++p == pe )
		goto _test_eof112;
case 112:
#line 1821 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr123;
tr123:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st113;
st113:
	if ( ++p == pe )
		goto _test_eof113;
case 113:
#line 1833 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr124;
tr124:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st114;
st114:
	if ( ++p == pe )
		goto _test_eof114;
case 114:
#line 1845 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr125;
tr125:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st115;
st115:
	if ( ++p == pe )
		goto _test_eof115;
case 115:
#line 1857 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr126;
tr126:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st116;
st116:
	if ( ++p == pe )
		goto _test_eof116;
case 116:
#line 1869 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr127;
tr127:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st117;
st117:
	if ( ++p == pe )
		goto _test_eof117;
case 117:
#line 1881 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr128;
tr128:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st118;
st118:
	if ( ++p == pe )
		goto _test_eof118;
case 118:
#line 1893 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr129;
tr129:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st119;
st119:
	if ( ++p == pe )
		goto _test_eof119;
case 119:
#line 1905 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr130;
tr130:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st120;
st120:
	if ( ++p == pe )
		goto _test_eof120;
case 120:
#line 1917 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr131;
tr131:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st121;
st121:
	if ( ++p == pe )
		goto _test_eof121;
case 121:
#line 1929 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr132;
tr132:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st122;
st122:
	if ( ++p == pe )
		goto _test_eof122;
case 122:
#line 1941 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr133;
tr133:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st123;
st123:
	if ( ++p == pe )
		goto _test_eof123;
case 123:
#line 1953 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr134;
tr134:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st124;
st124:
	if ( ++p == pe )
		goto _test_eof124;
case 124:
#line 1965 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr135;
tr135:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st125;
st125:
	if ( ++p == pe )
		goto _test_eof125;
case 125:
#line 1977 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr136;
tr136:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st126;
st126:
	if ( ++p == pe )
		goto _test_eof126;
case 126:
#line 1989 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr137;
tr137:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st127;
st127:
	if ( ++p == pe )
		goto _test_eof127;
case 127:
#line 2001 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr138;
tr138:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st128;
st128:
	if ( ++p == pe )
		goto _test_eof128;
case 128:
#line 2013 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr139;
tr139:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st129;
st129:
	if ( ++p == pe )
		goto _test_eof129;
case 129:
#line 2025 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr140;
tr140:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st130;
st130:
	if ( ++p == pe )
		goto _test_eof130;
case 130:
#line 2037 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr141;
tr141:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st131;
st131:
	if ( ++p == pe )
		goto _test_eof131;
case 131:
#line 2049 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr142;
tr142:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st132;
st132:
	if ( ++p == pe )
		goto _test_eof132;
case 132:
#line 2061 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr143;
tr143:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st133;
st133:
	if ( ++p == pe )
		goto _test_eof133;
case 133:
#line 2073 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr144;
tr144:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st134;
st134:
	if ( ++p == pe )
		goto _test_eof134;
case 134:
#line 2085 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr145;
tr145:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st135;
st135:
	if ( ++p == pe )
		goto _test_eof135;
case 135:
#line 2097 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr146;
tr146:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st136;
st136:
	if ( ++p == pe )
		goto _test_eof136;
case 136:
#line 2109 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr147;
tr147:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st137;
st137:
	if ( ++p == pe )
		goto _test_eof137;
case 137:
#line 2121 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr148;
tr148:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st138;
st138:
	if ( ++p == pe )
		goto _test_eof138;
case 138:
#line 2133 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr149;
tr149:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st139;
st139:
	if ( ++p == pe )
		goto _test_eof139;
case 139:
#line 2145 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr150;
tr150:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st140;
st140:
	if ( ++p == pe )
		goto _test_eof140;
case 140:
#line 2157 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr151;
tr151:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st141;
st141:
	if ( ++p == pe )
		goto _test_eof141;
case 141:
#line 2169 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr152;
tr152:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st142;
st142:
	if ( ++p == pe )
		goto _test_eof142;
case 142:
#line 2181 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr153;
tr153:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st143;
st143:
	if ( ++p == pe )
		goto _test_eof143;
case 143:
#line 2193 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr154;
tr154:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st144;
st144:
	if ( ++p == pe )
		goto _test_eof144;
case 144:
#line 2205 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr155;
tr155:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st145;
st145:
	if ( ++p == pe )
		goto _test_eof145;
case 145:
#line 2217 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr156;
tr156:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st146;
st146:
	if ( ++p == pe )
		goto _test_eof146;
case 146:
#line 2229 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr157;
tr157:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st147;
st147:
	if ( ++p == pe )
		goto _test_eof147;
case 147:
#line 2241 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr158;
tr158:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st148;
st148:
	if ( ++p == pe )
		goto _test_eof148;
case 148:
#line 2253 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr159;
tr159:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st149;
st149:
	if ( ++p == pe )
		goto _test_eof149;
case 149:
#line 2265 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr160;
tr160:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st150;
st150:
	if ( ++p == pe )
		goto _test_eof150;
case 150:
#line 2277 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr161;
tr161:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st151;
st151:
	if ( ++p == pe )
		goto _test_eof151;
case 151:
#line 2289 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr162;
tr162:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st152;
st152:
	if ( ++p == pe )
		goto _test_eof152;
case 152:
#line 2301 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr163;
tr163:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st153;
st153:
	if ( ++p == pe )
		goto _test_eof153;
case 153:
#line 2313 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr164;
tr164:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st154;
st154:
	if ( ++p == pe )
		goto _test_eof154;
case 154:
#line 2325 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr165;
tr165:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st155;
st155:
	if ( ++p == pe )
		goto _test_eof155;
case 155:
#line 2337 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr166;
tr166:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st156;
st156:
	if ( ++p == pe )
		goto _test_eof156;
case 156:
#line 2349 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr167;
tr167:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st157;
st157:
	if ( ++p == pe )
		goto _test_eof157;
case 157:
#line 2361 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr168;
tr168:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st158;
st158:
	if ( ++p == pe )
		goto _test_eof158;
case 158:
#line 2373 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr169;
tr169:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st159;
st159:
	if ( ++p == pe )
		goto _test_eof159;
case 159:
#line 2385 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr170;
tr170:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st160;
st160:
	if ( ++p == pe )
		goto _test_eof160;
case 160:
#line 2397 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr171;
tr171:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st161;
st161:
	if ( ++p == pe )
		goto _test_eof161;
case 161:
#line 2409 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr172;
tr172:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st162;
st162:
	if ( ++p == pe )
		goto _test_eof162;
case 162:
#line 2421 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr173;
tr173:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st163;
st163:
	if ( ++p == pe )
		goto _test_eof163;
case 163:
#line 2433 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr174;
tr174:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st164;
st164:
	if ( ++p == pe )
		goto _test_eof164;
case 164:
#line 2445 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr175;
tr175:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st165;
st165:
	if ( ++p == pe )
		goto _test_eof165;
case 165:
#line 2457 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr176;
tr176:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st166;
st166:
	if ( ++p == pe )
		goto _test_eof166;
case 166:
#line 2469 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr177;
tr177:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st167;
st167:
	if ( ++p == pe )
		goto _test_eof167;
case 167:
#line 2481 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr178;
tr178:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st168;
st168:
	if ( ++p == pe )
		goto _test_eof168;
case 168:
#line 2493 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr179;
tr179:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st169;
st169:
	if ( ++p == pe )
		goto _test_eof169;
case 169:
#line 2505 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr180;
tr180:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st170;
st170:
	if ( ++p == pe )
		goto _test_eof170;
case 170:
#line 2517 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr181;
tr181:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st171;
st171:
	if ( ++p == pe )
		goto _test_eof171;
case 171:
#line 2529 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr182;
tr182:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st172;
st172:
	if ( ++p == pe )
		goto _test_eof172;
case 172:
#line 2541 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr183;
tr183:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st173;
st173:
	if ( ++p == pe )
		goto _test_eof173;
case 173:
#line 2553 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr184;
tr184:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st174;
st174:
	if ( ++p == pe )
		goto _test_eof174;
case 174:
#line 2565 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr185;
tr185:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st175;
st175:
	if ( ++p == pe )
		goto _test_eof175;
case 175:
#line 2577 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr186;
tr186:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st176;
st176:
	if ( ++p == pe )
		goto _test_eof176;
case 176:
#line 2589 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr187;
tr187:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st177;
st177:
	if ( ++p == pe )
		goto _test_eof177;
case 177:
#line 2601 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr188;
tr188:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st178;
st178:
	if ( ++p == pe )
		goto _test_eof178;
case 178:
#line 2613 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr189;
tr189:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st179;
st179:
	if ( ++p == pe )
		goto _test_eof179;
case 179:
#line 2625 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr190;
tr190:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st180;
st180:
	if ( ++p == pe )
		goto _test_eof180;
case 180:
#line 2637 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr191;
tr191:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st181;
st181:
	if ( ++p == pe )
		goto _test_eof181;
case 181:
#line 2649 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr192;
tr192:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st182;
st182:
	if ( ++p == pe )
		goto _test_eof182;
case 182:
#line 2661 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr193;
tr193:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st183;
st183:
	if ( ++p == pe )
		goto _test_eof183;
case 183:
#line 2673 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr194;
tr194:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st184;
st184:
	if ( ++p == pe )
		goto _test_eof184;
case 184:
#line 2685 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr195;
tr195:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st185;
st185:
	if ( ++p == pe )
		goto _test_eof185;
case 185:
#line 2697 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr196;
tr196:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st186;
st186:
	if ( ++p == pe )
		goto _test_eof186;
case 186:
#line 2709 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr197;
tr197:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st187;
st187:
	if ( ++p == pe )
		goto _test_eof187;
case 187:
#line 2721 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr198;
tr198:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st188;
st188:
	if ( ++p == pe )
		goto _test_eof188;
case 188:
#line 2733 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr199;
tr199:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st189;
st189:
	if ( ++p == pe )
		goto _test_eof189;
case 189:
#line 2745 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr200;
tr200:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st190;
st190:
	if ( ++p == pe )
		goto _test_eof190;
case 190:
#line 2757 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr201;
tr201:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st191;
st191:
	if ( ++p == pe )
		goto _test_eof191;
case 191:
#line 2769 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr202;
tr202:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st192;
st192:
	if ( ++p == pe )
		goto _test_eof192;
case 192:
#line 2781 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr203;
tr203:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st193;
st193:
	if ( ++p == pe )
		goto _test_eof193;
case 193:
#line 2793 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr204;
tr204:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st194;
st194:
	if ( ++p == pe )
		goto _test_eof194;
case 194:
#line 2805 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr205;
tr205:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st195;
st195:
	if ( ++p == pe )
		goto _test_eof195;
case 195:
#line 2817 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr206;
tr206:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st196;
st196:
	if ( ++p == pe )
		goto _test_eof196;
case 196:
#line 2829 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr207;
tr207:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st197;
st197:
	if ( ++p == pe )
		goto _test_eof197;
case 197:
#line 2841 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr208;
tr208:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st198;
st198:
	if ( ++p == pe )
		goto _test_eof198;
case 198:
#line 2853 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr209;
tr209:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st199;
st199:
	if ( ++p == pe )
		goto _test_eof199;
case 199:
#line 2865 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr210;
tr210:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st200;
st200:
	if ( ++p == pe )
		goto _test_eof200;
case 200:
#line 2877 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr211;
tr211:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st201;
st201:
	if ( ++p == pe )
		goto _test_eof201;
case 201:
#line 2889 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr212;
tr212:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st202;
st202:
	if ( ++p == pe )
		goto _test_eof202;
case 202:
#line 2901 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr213;
tr213:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st203;
st203:
	if ( ++p == pe )
		goto _test_eof203;
case 203:
#line 2913 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr214;
tr214:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st204;
st204:
	if ( ++p == pe )
		goto _test_eof204;
case 204:
#line 2925 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr215;
tr215:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st205;
st205:
	if ( ++p == pe )
		goto _test_eof205;
case 205:
#line 2937 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr216;
tr216:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st206;
st206:
	if ( ++p == pe )
		goto _test_eof206;
case 206:
#line 2949 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr217;
tr217:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st207;
st207:
	if ( ++p == pe )
		goto _test_eof207;
case 207:
#line 2961 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr218;
tr218:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st208;
st208:
	if ( ++p == pe )
		goto _test_eof208;
case 208:
#line 2973 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr219;
tr219:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st209;
st209:
	if ( ++p == pe )
		goto _test_eof209;
case 209:
#line 2985 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr220;
tr220:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st210;
st210:
	if ( ++p == pe )
		goto _test_eof210;
case 210:
#line 2997 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr221;
tr221:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st211;
st211:
	if ( ++p == pe )
		goto _test_eof211;
case 211:
#line 3009 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr222;
tr222:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st212;
st212:
	if ( ++p == pe )
		goto _test_eof212;
case 212:
#line 3021 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr223;
tr223:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st213;
st213:
	if ( ++p == pe )
		goto _test_eof213;
case 213:
#line 3033 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr224;
tr224:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st214;
st214:
	if ( ++p == pe )
		goto _test_eof214;
case 214:
#line 3045 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr225;
tr225:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st215;
st215:
	if ( ++p == pe )
		goto _test_eof215;
case 215:
#line 3057 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr226;
tr226:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st216;
st216:
	if ( ++p == pe )
		goto _test_eof216;
case 216:
#line 3069 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr227;
tr227:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st217;
st217:
	if ( ++p == pe )
		goto _test_eof217;
case 217:
#line 3081 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr228;
tr228:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st218;
st218:
	if ( ++p == pe )
		goto _test_eof218;
case 218:
#line 3093 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr229;
tr229:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st219;
st219:
	if ( ++p == pe )
		goto _test_eof219;
case 219:
#line 3105 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr230;
tr230:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st220;
st220:
	if ( ++p == pe )
		goto _test_eof220;
case 220:
#line 3117 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr231;
tr231:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st221;
st221:
	if ( ++p == pe )
		goto _test_eof221;
case 221:
#line 3129 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr232;
tr232:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st222;
st222:
	if ( ++p == pe )
		goto _test_eof222;
case 222:
#line 3141 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr233;
tr233:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st223;
st223:
	if ( ++p == pe )
		goto _test_eof223;
case 223:
#line 3153 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr234;
tr234:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st224;
st224:
	if ( ++p == pe )
		goto _test_eof224;
case 224:
#line 3165 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr235;
tr235:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st225;
st225:
	if ( ++p == pe )
		goto _test_eof225;
case 225:
#line 3177 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr236;
tr236:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st226;
st226:
	if ( ++p == pe )
		goto _test_eof226;
case 226:
#line 3189 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr237;
tr237:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st227;
st227:
	if ( ++p == pe )
		goto _test_eof227;
case 227:
#line 3201 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr238;
tr238:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st228;
st228:
	if ( ++p == pe )
		goto _test_eof228;
case 228:
#line 3213 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr239;
tr239:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st229;
st229:
	if ( ++p == pe )
		goto _test_eof229;
case 229:
#line 3225 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr240;
tr240:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st230;
st230:
	if ( ++p == pe )
		goto _test_eof230;
case 230:
#line 3237 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr241;
tr241:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st231;
st231:
	if ( ++p == pe )
		goto _test_eof231;
case 231:
#line 3249 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr242;
tr242:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st232;
st232:
	if ( ++p == pe )
		goto _test_eof232;
case 232:
#line 3261 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr243;
tr243:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st233;
st233:
	if ( ++p == pe )
		goto _test_eof233;
case 233:
#line 3273 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr244;
tr244:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st234;
st234:
	if ( ++p == pe )
		goto _test_eof234;
case 234:
#line 3285 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr245;
tr245:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st235;
st235:
	if ( ++p == pe )
		goto _test_eof235;
case 235:
#line 3297 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr246;
tr246:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st236;
st236:
	if ( ++p == pe )
		goto _test_eof236;
case 236:
#line 3309 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr247;
tr247:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st237;
st237:
	if ( ++p == pe )
		goto _test_eof237;
case 237:
#line 3321 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr248;
tr248:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st238;
st238:
	if ( ++p == pe )
		goto _test_eof238;
case 238:
#line 3333 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr249;
tr249:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st239;
st239:
	if ( ++p == pe )
		goto _test_eof239;
case 239:
#line 3345 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr250;
tr250:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st240;
st240:
	if ( ++p == pe )
		goto _test_eof240;
case 240:
#line 3357 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr251;
tr251:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st241;
st241:
	if ( ++p == pe )
		goto _test_eof241;
case 241:
#line 3369 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr252;
tr252:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st242;
st242:
	if ( ++p == pe )
		goto _test_eof242;
case 242:
#line 3381 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr253;
tr253:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st243;
st243:
	if ( ++p == pe )
		goto _test_eof243;
case 243:
#line 3393 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr254;
tr254:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st244;
st244:
	if ( ++p == pe )
		goto _test_eof244;
case 244:
#line 3405 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr255;
tr255:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st245;
st245:
	if ( ++p == pe )
		goto _test_eof245;
case 245:
#line 3417 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr256;
tr256:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st246;
st246:
	if ( ++p == pe )
		goto _test_eof246;
case 246:
#line 3429 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr257;
tr257:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st247;
st247:
	if ( ++p == pe )
		goto _test_eof247;
case 247:
#line 3441 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr258;
tr258:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st248;
st248:
	if ( ++p == pe )
		goto _test_eof248;
case 248:
#line 3453 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr259;
tr259:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st249;
st249:
	if ( ++p == pe )
		goto _test_eof249;
case 249:
#line 3465 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr260;
tr260:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st250;
st250:
	if ( ++p == pe )
		goto _test_eof250;
case 250:
#line 3477 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr261;
tr261:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st251;
st251:
	if ( ++p == pe )
		goto _test_eof251;
case 251:
#line 3489 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr262;
tr262:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st252;
st252:
	if ( ++p == pe )
		goto _test_eof252;
case 252:
#line 3501 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr263;
tr263:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st253;
st253:
	if ( ++p == pe )
		goto _test_eof253;
case 253:
#line 3513 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr264;
tr264:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st254;
st254:
	if ( ++p == pe )
		goto _test_eof254;
case 254:
#line 3525 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr265;
tr265:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st255;
st255:
	if ( ++p == pe )
		goto _test_eof255;
case 255:
#line 3537 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr266;
tr266:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st256;
st256:
	if ( ++p == pe )
		goto _test_eof256;
case 256:
#line 3549 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr267;
tr267:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st257;
st257:
	if ( ++p == pe )
		goto _test_eof257;
case 257:
#line 3561 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr268;
tr268:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st258;
st258:
	if ( ++p == pe )
		goto _test_eof258;
case 258:
#line 3573 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr269;
tr269:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st259;
st259:
	if ( ++p == pe )
		goto _test_eof259;
case 259:
#line 3585 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr270;
tr270:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st260;
st260:
	if ( ++p == pe )
		goto _test_eof260;
case 260:
#line 3597 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr271;
tr271:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st261;
st261:
	if ( ++p == pe )
		goto _test_eof261;
case 261:
#line 3609 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr272;
tr272:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st262;
st262:
	if ( ++p == pe )
		goto _test_eof262;
case 262:
#line 3621 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr18;
	goto tr1;
tr18:
#line 150 "stomp.rl"
	{ string_buffer_release(&stomp->buffer, &stomp->value); STOMP_DEBUG(("value=%s", stomp->value.str));}
	goto st263;
st263:
	if ( ++p == pe )
		goto _test_eof263;
case 263:
#line 3631 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr274;
	goto tr273;
tr11:
#line 27 "stomp.rl"
	{
	    { stomp->stack[ stomp->top++] = 264; goto st332;}
    }
	goto st264;
tr274:
#line 151 "stomp.rl"
	{ object_put_zerocopy(stomp->msg.headers, stomp->name.str, &stomp->value); 
						 STOMP_DEBUG(("name=%s", stomp->name.str)); 
						 STOMP_DEBUG(("value=%s", stomp->value.str));
						 STOMP_DEBUG((""));
			             string_init(&stomp->name, 0, 0);
						 string_init(&stomp->value, 0, 0); 
					    }
#line 27 "stomp.rl"
	{
	    { stomp->stack[ stomp->top++] = 264; goto st332;}
    }
	goto st264;
st264:
	if ( ++p == pe )
		goto _test_eof264;
case 264:
#line 3655 "clientfsm.c"
	if ( (*p) == 0 )
		goto tr275;
	goto tr1;
tr275:
#line 31 "stomp.rl"
	{
	    stomp_executeCommand(stomp);
	}
	goto st331;
st331:
	if ( ++p == pe )
		goto _test_eof331;
case 331:
#line 3667 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto st265;
		case 65: goto tr2;
		case 66: goto tr3;
		case 67: goto tr4;
		case 68: goto tr5;
		case 78: goto tr6;
		case 83: goto tr7;
		case 85: goto tr8;
	}
	goto tr0;
st265:
	if ( ++p == pe )
		goto _test_eof265;
case 265:
	switch( (*p) ) {
		case 10: goto st265;
		case 65: goto tr2;
		case 66: goto tr3;
		case 67: goto tr4;
		case 68: goto tr5;
		case 78: goto tr6;
		case 83: goto tr7;
		case 85: goto tr8;
	}
	goto tr0;
tr2:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st266;
st266:
	if ( ++p == pe )
		goto _test_eof266;
case 266:
#line 3702 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 66: goto tr277;
		case 67: goto tr278;
	}
	goto tr0;
tr277:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st267;
st267:
	if ( ++p == pe )
		goto _test_eof267;
case 267:
#line 3717 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 79: goto tr279;
	}
	goto tr0;
tr279:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st268;
st268:
	if ( ++p == pe )
		goto _test_eof268;
case 268:
#line 3731 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 82: goto tr280;
	}
	goto tr0;
tr280:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st269;
st269:
	if ( ++p == pe )
		goto _test_eof269;
case 269:
#line 3745 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 84: goto tr281;
	}
	goto tr0;
tr281:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st270;
st270:
	if ( ++p == pe )
		goto _test_eof270;
case 270:
#line 3759 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr282;
	goto tr0;
tr278:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st271;
st271:
	if ( ++p == pe )
		goto _test_eof271;
case 271:
#line 3771 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 75: goto tr283;
	}
	goto tr0;
tr283:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st272;
st272:
	if ( ++p == pe )
		goto _test_eof272;
case 272:
#line 3785 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr284;
	goto tr0;
tr3:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st273;
st273:
	if ( ++p == pe )
		goto _test_eof273;
case 273:
#line 3797 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 69: goto tr285;
	}
	goto tr0;
tr285:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st274;
st274:
	if ( ++p == pe )
		goto _test_eof274;
case 274:
#line 3811 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 71: goto tr286;
	}
	goto tr0;
tr286:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st275;
st275:
	if ( ++p == pe )
		goto _test_eof275;
case 275:
#line 3825 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 73: goto tr287;
	}
	goto tr0;
tr287:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st276;
st276:
	if ( ++p == pe )
		goto _test_eof276;
case 276:
#line 3839 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 78: goto tr288;
	}
	goto tr0;
tr288:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st277;
st277:
	if ( ++p == pe )
		goto _test_eof277;
case 277:
#line 3853 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr289;
	goto tr0;
tr4:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st278;
st278:
	if ( ++p == pe )
		goto _test_eof278;
case 278:
#line 3865 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 79: goto tr290;
	}
	goto tr0;
tr290:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st279;
st279:
	if ( ++p == pe )
		goto _test_eof279;
case 279:
#line 3879 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 77: goto tr291;
		case 78: goto tr292;
	}
	goto tr0;
tr291:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st280;
st280:
	if ( ++p == pe )
		goto _test_eof280;
case 280:
#line 3894 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 77: goto tr293;
	}
	goto tr0;
tr293:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st281;
st281:
	if ( ++p == pe )
		goto _test_eof281;
case 281:
#line 3908 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 73: goto tr294;
	}
	goto tr0;
tr294:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st282;
st282:
	if ( ++p == pe )
		goto _test_eof282;
case 282:
#line 3922 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 84: goto tr295;
	}
	goto tr0;
tr295:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st283;
st283:
	if ( ++p == pe )
		goto _test_eof283;
case 283:
#line 3936 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr296;
	goto tr0;
tr292:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st284;
st284:
	if ( ++p == pe )
		goto _test_eof284;
case 284:
#line 3948 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 78: goto tr297;
	}
	goto tr0;
tr297:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st285;
st285:
	if ( ++p == pe )
		goto _test_eof285;
case 285:
#line 3962 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 69: goto tr298;
	}
	goto tr0;
tr298:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st286;
st286:
	if ( ++p == pe )
		goto _test_eof286;
case 286:
#line 3976 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 67: goto tr299;
	}
	goto tr0;
tr299:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st287;
st287:
	if ( ++p == pe )
		goto _test_eof287;
case 287:
#line 3990 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 84: goto tr300;
	}
	goto tr0;
tr300:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st288;
st288:
	if ( ++p == pe )
		goto _test_eof288;
case 288:
#line 4004 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr301;
	goto tr0;
tr5:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st289;
st289:
	if ( ++p == pe )
		goto _test_eof289;
case 289:
#line 4016 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 73: goto tr302;
	}
	goto tr0;
tr302:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st290;
st290:
	if ( ++p == pe )
		goto _test_eof290;
case 290:
#line 4030 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 83: goto tr303;
	}
	goto tr0;
tr303:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st291;
st291:
	if ( ++p == pe )
		goto _test_eof291;
case 291:
#line 4044 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 67: goto tr304;
	}
	goto tr0;
tr304:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st292;
st292:
	if ( ++p == pe )
		goto _test_eof292;
case 292:
#line 4058 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 79: goto tr305;
	}
	goto tr0;
tr305:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st293;
st293:
	if ( ++p == pe )
		goto _test_eof293;
case 293:
#line 4072 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 78: goto tr306;
	}
	goto tr0;
tr306:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st294;
st294:
	if ( ++p == pe )
		goto _test_eof294;
case 294:
#line 4086 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 78: goto tr307;
	}
	goto tr0;
tr307:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st295;
st295:
	if ( ++p == pe )
		goto _test_eof295;
case 295:
#line 4100 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 69: goto tr308;
	}
	goto tr0;
tr308:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st296;
st296:
	if ( ++p == pe )
		goto _test_eof296;
case 296:
#line 4114 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 67: goto tr309;
	}
	goto tr0;
tr309:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st297;
st297:
	if ( ++p == pe )
		goto _test_eof297;
case 297:
#line 4128 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 84: goto tr310;
	}
	goto tr0;
tr310:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st298;
st298:
	if ( ++p == pe )
		goto _test_eof298;
case 298:
#line 4142 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr311;
	goto tr0;
tr6:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st299;
st299:
	if ( ++p == pe )
		goto _test_eof299;
case 299:
#line 4154 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 65: goto tr312;
	}
	goto tr0;
tr312:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st300;
st300:
	if ( ++p == pe )
		goto _test_eof300;
case 300:
#line 4168 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 67: goto tr313;
	}
	goto tr0;
tr313:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st301;
st301:
	if ( ++p == pe )
		goto _test_eof301;
case 301:
#line 4182 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 75: goto tr314;
	}
	goto tr0;
tr314:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st302;
st302:
	if ( ++p == pe )
		goto _test_eof302;
case 302:
#line 4196 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr315;
	goto tr0;
tr7:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st303;
st303:
	if ( ++p == pe )
		goto _test_eof303;
case 303:
#line 4208 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 69: goto tr316;
		case 84: goto tr317;
		case 85: goto tr318;
	}
	goto tr0;
tr316:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st304;
st304:
	if ( ++p == pe )
		goto _test_eof304;
case 304:
#line 4224 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 78: goto tr319;
	}
	goto tr0;
tr319:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st305;
st305:
	if ( ++p == pe )
		goto _test_eof305;
case 305:
#line 4238 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 68: goto tr320;
	}
	goto tr0;
tr320:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st306;
st306:
	if ( ++p == pe )
		goto _test_eof306;
case 306:
#line 4252 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr321;
	goto tr0;
tr317:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st307;
st307:
	if ( ++p == pe )
		goto _test_eof307;
case 307:
#line 4264 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 79: goto tr322;
	}
	goto tr0;
tr322:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st308;
st308:
	if ( ++p == pe )
		goto _test_eof308;
case 308:
#line 4278 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 77: goto tr323;
	}
	goto tr0;
tr323:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st309;
st309:
	if ( ++p == pe )
		goto _test_eof309;
case 309:
#line 4292 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 80: goto tr324;
	}
	goto tr0;
tr324:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st310;
st310:
	if ( ++p == pe )
		goto _test_eof310;
case 310:
#line 4306 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr325;
	goto tr0;
tr318:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st311;
st311:
	if ( ++p == pe )
		goto _test_eof311;
case 311:
#line 4318 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 66: goto tr326;
	}
	goto tr0;
tr326:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st312;
st312:
	if ( ++p == pe )
		goto _test_eof312;
case 312:
#line 4332 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 83: goto tr327;
	}
	goto tr0;
tr327:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st313;
st313:
	if ( ++p == pe )
		goto _test_eof313;
case 313:
#line 4346 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 67: goto tr328;
	}
	goto tr0;
tr328:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st314;
st314:
	if ( ++p == pe )
		goto _test_eof314;
case 314:
#line 4360 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 82: goto tr329;
	}
	goto tr0;
tr329:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st315;
st315:
	if ( ++p == pe )
		goto _test_eof315;
case 315:
#line 4374 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 73: goto tr330;
	}
	goto tr0;
tr330:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st316;
st316:
	if ( ++p == pe )
		goto _test_eof316;
case 316:
#line 4388 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 66: goto tr331;
	}
	goto tr0;
tr331:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st317;
st317:
	if ( ++p == pe )
		goto _test_eof317;
case 317:
#line 4402 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 69: goto tr332;
	}
	goto tr0;
tr332:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st318;
st318:
	if ( ++p == pe )
		goto _test_eof318;
case 318:
#line 4416 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr333;
	goto tr0;
tr8:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st319;
st319:
	if ( ++p == pe )
		goto _test_eof319;
case 319:
#line 4428 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 78: goto tr334;
	}
	goto tr0;
tr334:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st320;
st320:
	if ( ++p == pe )
		goto _test_eof320;
case 320:
#line 4442 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 83: goto tr335;
	}
	goto tr0;
tr335:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st321;
st321:
	if ( ++p == pe )
		goto _test_eof321;
case 321:
#line 4456 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 85: goto tr336;
	}
	goto tr0;
tr336:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st322;
st322:
	if ( ++p == pe )
		goto _test_eof322;
case 322:
#line 4470 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 66: goto tr337;
	}
	goto tr0;
tr337:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st323;
st323:
	if ( ++p == pe )
		goto _test_eof323;
case 323:
#line 4484 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 83: goto tr338;
	}
	goto tr0;
tr338:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st324;
st324:
	if ( ++p == pe )
		goto _test_eof324;
case 324:
#line 4498 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 67: goto tr339;
	}
	goto tr0;
tr339:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st325;
st325:
	if ( ++p == pe )
		goto _test_eof325;
case 325:
#line 4512 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 82: goto tr340;
	}
	goto tr0;
tr340:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st326;
st326:
	if ( ++p == pe )
		goto _test_eof326;
case 326:
#line 4526 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 73: goto tr341;
	}
	goto tr0;
tr341:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st327;
st327:
	if ( ++p == pe )
		goto _test_eof327;
case 327:
#line 4540 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 66: goto tr342;
	}
	goto tr0;
tr342:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st328;
st328:
	if ( ++p == pe )
		goto _test_eof328;
case 328:
#line 4554 "clientfsm.c"
	switch( (*p) ) {
		case 10: goto tr9;
		case 69: goto tr343;
	}
	goto tr0;
tr343:
#line 5 "stomp.rl"
	{
	  string_buffer_appendN(&stomp->buffer, (*p),   1);
	}
	goto st329;
st329:
	if ( ++p == pe )
		goto _test_eof329;
case 329:
#line 4568 "clientfsm.c"
	if ( (*p) == 10 )
		goto tr344;
	goto tr0;
st330:
	if ( ++p == pe )
		goto _test_eof330;
case 330:
	switch( (*p) ) {
		case 34: goto tr345;
		case 92: goto tr345;
		case 99: goto tr345;
		case 110: goto tr345;
	}
	goto tr1;
tr346:
#line 173 "stomp.rl"
	{ p = stomp_readBody(stomp, p, pe); if(pe != p) { { stomp->cs =  stomp->stack[-- stomp->top];goto _again;} } else { p--; } }
	goto st332;
st332:
	if ( ++p == pe )
		goto _test_eof332;
case 332:
#line 4589 "clientfsm.c"
	goto tr346;
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
	_test_eof75:  stomp->cs = 75; goto _test_eof; 
	_test_eof76:  stomp->cs = 76; goto _test_eof; 
	_test_eof77:  stomp->cs = 77; goto _test_eof; 
	_test_eof78:  stomp->cs = 78; goto _test_eof; 
	_test_eof79:  stomp->cs = 79; goto _test_eof; 
	_test_eof80:  stomp->cs = 80; goto _test_eof; 
	_test_eof81:  stomp->cs = 81; goto _test_eof; 
	_test_eof82:  stomp->cs = 82; goto _test_eof; 
	_test_eof83:  stomp->cs = 83; goto _test_eof; 
	_test_eof84:  stomp->cs = 84; goto _test_eof; 
	_test_eof85:  stomp->cs = 85; goto _test_eof; 
	_test_eof86:  stomp->cs = 86; goto _test_eof; 
	_test_eof87:  stomp->cs = 87; goto _test_eof; 
	_test_eof88:  stomp->cs = 88; goto _test_eof; 
	_test_eof89:  stomp->cs = 89; goto _test_eof; 
	_test_eof90:  stomp->cs = 90; goto _test_eof; 
	_test_eof91:  stomp->cs = 91; goto _test_eof; 
	_test_eof92:  stomp->cs = 92; goto _test_eof; 
	_test_eof93:  stomp->cs = 93; goto _test_eof; 
	_test_eof94:  stomp->cs = 94; goto _test_eof; 
	_test_eof95:  stomp->cs = 95; goto _test_eof; 
	_test_eof96:  stomp->cs = 96; goto _test_eof; 
	_test_eof97:  stomp->cs = 97; goto _test_eof; 
	_test_eof98:  stomp->cs = 98; goto _test_eof; 
	_test_eof99:  stomp->cs = 99; goto _test_eof; 
	_test_eof100:  stomp->cs = 100; goto _test_eof; 
	_test_eof101:  stomp->cs = 101; goto _test_eof; 
	_test_eof102:  stomp->cs = 102; goto _test_eof; 
	_test_eof103:  stomp->cs = 103; goto _test_eof; 
	_test_eof104:  stomp->cs = 104; goto _test_eof; 
	_test_eof105:  stomp->cs = 105; goto _test_eof; 
	_test_eof106:  stomp->cs = 106; goto _test_eof; 
	_test_eof107:  stomp->cs = 107; goto _test_eof; 
	_test_eof108:  stomp->cs = 108; goto _test_eof; 
	_test_eof109:  stomp->cs = 109; goto _test_eof; 
	_test_eof110:  stomp->cs = 110; goto _test_eof; 
	_test_eof111:  stomp->cs = 111; goto _test_eof; 
	_test_eof112:  stomp->cs = 112; goto _test_eof; 
	_test_eof113:  stomp->cs = 113; goto _test_eof; 
	_test_eof114:  stomp->cs = 114; goto _test_eof; 
	_test_eof115:  stomp->cs = 115; goto _test_eof; 
	_test_eof116:  stomp->cs = 116; goto _test_eof; 
	_test_eof117:  stomp->cs = 117; goto _test_eof; 
	_test_eof118:  stomp->cs = 118; goto _test_eof; 
	_test_eof119:  stomp->cs = 119; goto _test_eof; 
	_test_eof120:  stomp->cs = 120; goto _test_eof; 
	_test_eof121:  stomp->cs = 121; goto _test_eof; 
	_test_eof122:  stomp->cs = 122; goto _test_eof; 
	_test_eof123:  stomp->cs = 123; goto _test_eof; 
	_test_eof124:  stomp->cs = 124; goto _test_eof; 
	_test_eof125:  stomp->cs = 125; goto _test_eof; 
	_test_eof126:  stomp->cs = 126; goto _test_eof; 
	_test_eof127:  stomp->cs = 127; goto _test_eof; 
	_test_eof128:  stomp->cs = 128; goto _test_eof; 
	_test_eof129:  stomp->cs = 129; goto _test_eof; 
	_test_eof130:  stomp->cs = 130; goto _test_eof; 
	_test_eof131:  stomp->cs = 131; goto _test_eof; 
	_test_eof132:  stomp->cs = 132; goto _test_eof; 
	_test_eof133:  stomp->cs = 133; goto _test_eof; 
	_test_eof134:  stomp->cs = 134; goto _test_eof; 
	_test_eof135:  stomp->cs = 135; goto _test_eof; 
	_test_eof136:  stomp->cs = 136; goto _test_eof; 
	_test_eof137:  stomp->cs = 137; goto _test_eof; 
	_test_eof138:  stomp->cs = 138; goto _test_eof; 
	_test_eof139:  stomp->cs = 139; goto _test_eof; 
	_test_eof140:  stomp->cs = 140; goto _test_eof; 
	_test_eof141:  stomp->cs = 141; goto _test_eof; 
	_test_eof142:  stomp->cs = 142; goto _test_eof; 
	_test_eof143:  stomp->cs = 143; goto _test_eof; 
	_test_eof144:  stomp->cs = 144; goto _test_eof; 
	_test_eof145:  stomp->cs = 145; goto _test_eof; 
	_test_eof146:  stomp->cs = 146; goto _test_eof; 
	_test_eof147:  stomp->cs = 147; goto _test_eof; 
	_test_eof148:  stomp->cs = 148; goto _test_eof; 
	_test_eof149:  stomp->cs = 149; goto _test_eof; 
	_test_eof150:  stomp->cs = 150; goto _test_eof; 
	_test_eof151:  stomp->cs = 151; goto _test_eof; 
	_test_eof152:  stomp->cs = 152; goto _test_eof; 
	_test_eof153:  stomp->cs = 153; goto _test_eof; 
	_test_eof154:  stomp->cs = 154; goto _test_eof; 
	_test_eof155:  stomp->cs = 155; goto _test_eof; 
	_test_eof156:  stomp->cs = 156; goto _test_eof; 
	_test_eof157:  stomp->cs = 157; goto _test_eof; 
	_test_eof158:  stomp->cs = 158; goto _test_eof; 
	_test_eof159:  stomp->cs = 159; goto _test_eof; 
	_test_eof160:  stomp->cs = 160; goto _test_eof; 
	_test_eof161:  stomp->cs = 161; goto _test_eof; 
	_test_eof162:  stomp->cs = 162; goto _test_eof; 
	_test_eof163:  stomp->cs = 163; goto _test_eof; 
	_test_eof164:  stomp->cs = 164; goto _test_eof; 
	_test_eof165:  stomp->cs = 165; goto _test_eof; 
	_test_eof166:  stomp->cs = 166; goto _test_eof; 
	_test_eof167:  stomp->cs = 167; goto _test_eof; 
	_test_eof168:  stomp->cs = 168; goto _test_eof; 
	_test_eof169:  stomp->cs = 169; goto _test_eof; 
	_test_eof170:  stomp->cs = 170; goto _test_eof; 
	_test_eof171:  stomp->cs = 171; goto _test_eof; 
	_test_eof172:  stomp->cs = 172; goto _test_eof; 
	_test_eof173:  stomp->cs = 173; goto _test_eof; 
	_test_eof174:  stomp->cs = 174; goto _test_eof; 
	_test_eof175:  stomp->cs = 175; goto _test_eof; 
	_test_eof176:  stomp->cs = 176; goto _test_eof; 
	_test_eof177:  stomp->cs = 177; goto _test_eof; 
	_test_eof178:  stomp->cs = 178; goto _test_eof; 
	_test_eof179:  stomp->cs = 179; goto _test_eof; 
	_test_eof180:  stomp->cs = 180; goto _test_eof; 
	_test_eof181:  stomp->cs = 181; goto _test_eof; 
	_test_eof182:  stomp->cs = 182; goto _test_eof; 
	_test_eof183:  stomp->cs = 183; goto _test_eof; 
	_test_eof184:  stomp->cs = 184; goto _test_eof; 
	_test_eof185:  stomp->cs = 185; goto _test_eof; 
	_test_eof186:  stomp->cs = 186; goto _test_eof; 
	_test_eof187:  stomp->cs = 187; goto _test_eof; 
	_test_eof188:  stomp->cs = 188; goto _test_eof; 
	_test_eof189:  stomp->cs = 189; goto _test_eof; 
	_test_eof190:  stomp->cs = 190; goto _test_eof; 
	_test_eof191:  stomp->cs = 191; goto _test_eof; 
	_test_eof192:  stomp->cs = 192; goto _test_eof; 
	_test_eof193:  stomp->cs = 193; goto _test_eof; 
	_test_eof194:  stomp->cs = 194; goto _test_eof; 
	_test_eof195:  stomp->cs = 195; goto _test_eof; 
	_test_eof196:  stomp->cs = 196; goto _test_eof; 
	_test_eof197:  stomp->cs = 197; goto _test_eof; 
	_test_eof198:  stomp->cs = 198; goto _test_eof; 
	_test_eof199:  stomp->cs = 199; goto _test_eof; 
	_test_eof200:  stomp->cs = 200; goto _test_eof; 
	_test_eof201:  stomp->cs = 201; goto _test_eof; 
	_test_eof202:  stomp->cs = 202; goto _test_eof; 
	_test_eof203:  stomp->cs = 203; goto _test_eof; 
	_test_eof204:  stomp->cs = 204; goto _test_eof; 
	_test_eof205:  stomp->cs = 205; goto _test_eof; 
	_test_eof206:  stomp->cs = 206; goto _test_eof; 
	_test_eof207:  stomp->cs = 207; goto _test_eof; 
	_test_eof208:  stomp->cs = 208; goto _test_eof; 
	_test_eof209:  stomp->cs = 209; goto _test_eof; 
	_test_eof210:  stomp->cs = 210; goto _test_eof; 
	_test_eof211:  stomp->cs = 211; goto _test_eof; 
	_test_eof212:  stomp->cs = 212; goto _test_eof; 
	_test_eof213:  stomp->cs = 213; goto _test_eof; 
	_test_eof214:  stomp->cs = 214; goto _test_eof; 
	_test_eof215:  stomp->cs = 215; goto _test_eof; 
	_test_eof216:  stomp->cs = 216; goto _test_eof; 
	_test_eof217:  stomp->cs = 217; goto _test_eof; 
	_test_eof218:  stomp->cs = 218; goto _test_eof; 
	_test_eof219:  stomp->cs = 219; goto _test_eof; 
	_test_eof220:  stomp->cs = 220; goto _test_eof; 
	_test_eof221:  stomp->cs = 221; goto _test_eof; 
	_test_eof222:  stomp->cs = 222; goto _test_eof; 
	_test_eof223:  stomp->cs = 223; goto _test_eof; 
	_test_eof224:  stomp->cs = 224; goto _test_eof; 
	_test_eof225:  stomp->cs = 225; goto _test_eof; 
	_test_eof226:  stomp->cs = 226; goto _test_eof; 
	_test_eof227:  stomp->cs = 227; goto _test_eof; 
	_test_eof228:  stomp->cs = 228; goto _test_eof; 
	_test_eof229:  stomp->cs = 229; goto _test_eof; 
	_test_eof230:  stomp->cs = 230; goto _test_eof; 
	_test_eof231:  stomp->cs = 231; goto _test_eof; 
	_test_eof232:  stomp->cs = 232; goto _test_eof; 
	_test_eof233:  stomp->cs = 233; goto _test_eof; 
	_test_eof234:  stomp->cs = 234; goto _test_eof; 
	_test_eof235:  stomp->cs = 235; goto _test_eof; 
	_test_eof236:  stomp->cs = 236; goto _test_eof; 
	_test_eof237:  stomp->cs = 237; goto _test_eof; 
	_test_eof238:  stomp->cs = 238; goto _test_eof; 
	_test_eof239:  stomp->cs = 239; goto _test_eof; 
	_test_eof240:  stomp->cs = 240; goto _test_eof; 
	_test_eof241:  stomp->cs = 241; goto _test_eof; 
	_test_eof242:  stomp->cs = 242; goto _test_eof; 
	_test_eof243:  stomp->cs = 243; goto _test_eof; 
	_test_eof244:  stomp->cs = 244; goto _test_eof; 
	_test_eof245:  stomp->cs = 245; goto _test_eof; 
	_test_eof246:  stomp->cs = 246; goto _test_eof; 
	_test_eof247:  stomp->cs = 247; goto _test_eof; 
	_test_eof248:  stomp->cs = 248; goto _test_eof; 
	_test_eof249:  stomp->cs = 249; goto _test_eof; 
	_test_eof250:  stomp->cs = 250; goto _test_eof; 
	_test_eof251:  stomp->cs = 251; goto _test_eof; 
	_test_eof252:  stomp->cs = 252; goto _test_eof; 
	_test_eof253:  stomp->cs = 253; goto _test_eof; 
	_test_eof254:  stomp->cs = 254; goto _test_eof; 
	_test_eof255:  stomp->cs = 255; goto _test_eof; 
	_test_eof256:  stomp->cs = 256; goto _test_eof; 
	_test_eof257:  stomp->cs = 257; goto _test_eof; 
	_test_eof258:  stomp->cs = 258; goto _test_eof; 
	_test_eof259:  stomp->cs = 259; goto _test_eof; 
	_test_eof260:  stomp->cs = 260; goto _test_eof; 
	_test_eof261:  stomp->cs = 261; goto _test_eof; 
	_test_eof262:  stomp->cs = 262; goto _test_eof; 
	_test_eof263:  stomp->cs = 263; goto _test_eof; 
	_test_eof264:  stomp->cs = 264; goto _test_eof; 
	_test_eof331:  stomp->cs = 331; goto _test_eof; 
	_test_eof265:  stomp->cs = 265; goto _test_eof; 
	_test_eof266:  stomp->cs = 266; goto _test_eof; 
	_test_eof267:  stomp->cs = 267; goto _test_eof; 
	_test_eof268:  stomp->cs = 268; goto _test_eof; 
	_test_eof269:  stomp->cs = 269; goto _test_eof; 
	_test_eof270:  stomp->cs = 270; goto _test_eof; 
	_test_eof271:  stomp->cs = 271; goto _test_eof; 
	_test_eof272:  stomp->cs = 272; goto _test_eof; 
	_test_eof273:  stomp->cs = 273; goto _test_eof; 
	_test_eof274:  stomp->cs = 274; goto _test_eof; 
	_test_eof275:  stomp->cs = 275; goto _test_eof; 
	_test_eof276:  stomp->cs = 276; goto _test_eof; 
	_test_eof277:  stomp->cs = 277; goto _test_eof; 
	_test_eof278:  stomp->cs = 278; goto _test_eof; 
	_test_eof279:  stomp->cs = 279; goto _test_eof; 
	_test_eof280:  stomp->cs = 280; goto _test_eof; 
	_test_eof281:  stomp->cs = 281; goto _test_eof; 
	_test_eof282:  stomp->cs = 282; goto _test_eof; 
	_test_eof283:  stomp->cs = 283; goto _test_eof; 
	_test_eof284:  stomp->cs = 284; goto _test_eof; 
	_test_eof285:  stomp->cs = 285; goto _test_eof; 
	_test_eof286:  stomp->cs = 286; goto _test_eof; 
	_test_eof287:  stomp->cs = 287; goto _test_eof; 
	_test_eof288:  stomp->cs = 288; goto _test_eof; 
	_test_eof289:  stomp->cs = 289; goto _test_eof; 
	_test_eof290:  stomp->cs = 290; goto _test_eof; 
	_test_eof291:  stomp->cs = 291; goto _test_eof; 
	_test_eof292:  stomp->cs = 292; goto _test_eof; 
	_test_eof293:  stomp->cs = 293; goto _test_eof; 
	_test_eof294:  stomp->cs = 294; goto _test_eof; 
	_test_eof295:  stomp->cs = 295; goto _test_eof; 
	_test_eof296:  stomp->cs = 296; goto _test_eof; 
	_test_eof297:  stomp->cs = 297; goto _test_eof; 
	_test_eof298:  stomp->cs = 298; goto _test_eof; 
	_test_eof299:  stomp->cs = 299; goto _test_eof; 
	_test_eof300:  stomp->cs = 300; goto _test_eof; 
	_test_eof301:  stomp->cs = 301; goto _test_eof; 
	_test_eof302:  stomp->cs = 302; goto _test_eof; 
	_test_eof303:  stomp->cs = 303; goto _test_eof; 
	_test_eof304:  stomp->cs = 304; goto _test_eof; 
	_test_eof305:  stomp->cs = 305; goto _test_eof; 
	_test_eof306:  stomp->cs = 306; goto _test_eof; 
	_test_eof307:  stomp->cs = 307; goto _test_eof; 
	_test_eof308:  stomp->cs = 308; goto _test_eof; 
	_test_eof309:  stomp->cs = 309; goto _test_eof; 
	_test_eof310:  stomp->cs = 310; goto _test_eof; 
	_test_eof311:  stomp->cs = 311; goto _test_eof; 
	_test_eof312:  stomp->cs = 312; goto _test_eof; 
	_test_eof313:  stomp->cs = 313; goto _test_eof; 
	_test_eof314:  stomp->cs = 314; goto _test_eof; 
	_test_eof315:  stomp->cs = 315; goto _test_eof; 
	_test_eof316:  stomp->cs = 316; goto _test_eof; 
	_test_eof317:  stomp->cs = 317; goto _test_eof; 
	_test_eof318:  stomp->cs = 318; goto _test_eof; 
	_test_eof319:  stomp->cs = 319; goto _test_eof; 
	_test_eof320:  stomp->cs = 320; goto _test_eof; 
	_test_eof321:  stomp->cs = 321; goto _test_eof; 
	_test_eof322:  stomp->cs = 322; goto _test_eof; 
	_test_eof323:  stomp->cs = 323; goto _test_eof; 
	_test_eof324:  stomp->cs = 324; goto _test_eof; 
	_test_eof325:  stomp->cs = 325; goto _test_eof; 
	_test_eof326:  stomp->cs = 326; goto _test_eof; 
	_test_eof327:  stomp->cs = 327; goto _test_eof; 
	_test_eof328:  stomp->cs = 328; goto _test_eof; 
	_test_eof329:  stomp->cs = 329; goto _test_eof; 
	_test_eof330:  stomp->cs = 330; goto _test_eof; 
	_test_eof332:  stomp->cs = 332; goto _test_eof; 

	_test_eof: {}
	if ( p == eof )
	{
	switch (  stomp->cs ) {
	case 1: 
	case 2: 
	case 3: 
	case 4: 
	case 5: 
	case 6: 
	case 7: 
	case 8: 
	case 9: 
	case 10: 
	case 11: 
	case 12: 
	case 13: 
	case 14: 
	case 15: 
	case 16: 
	case 17: 
	case 18: 
	case 19: 
	case 20: 
	case 21: 
	case 22: 
	case 23: 
	case 24: 
	case 25: 
	case 26: 
	case 27: 
	case 28: 
	case 29: 
	case 30: 
	case 31: 
	case 32: 
	case 33: 
	case 34: 
	case 35: 
	case 36: 
	case 37: 
	case 38: 
	case 39: 
	case 40: 
	case 41: 
	case 42: 
	case 43: 
	case 44: 
	case 45: 
	case 46: 
	case 47: 
	case 48: 
	case 49: 
	case 50: 
	case 51: 
	case 52: 
	case 53: 
	case 54: 
	case 55: 
	case 56: 
	case 57: 
	case 58: 
	case 59: 
	case 60: 
	case 61: 
	case 62: 
	case 63: 
	case 64: 
	case 65: 
	case 66: 
	case 67: 
	case 68: 
	case 69: 
	case 70: 
	case 71: 
	case 72: 
	case 73: 
	case 74: 
	case 75: 
	case 76: 
	case 77: 
	case 78: 
	case 79: 
	case 80: 
	case 81: 
	case 82: 
	case 83: 
	case 84: 
	case 85: 
	case 86: 
	case 87: 
	case 88: 
	case 89: 
	case 90: 
	case 91: 
	case 92: 
	case 93: 
	case 94: 
	case 95: 
	case 96: 
	case 97: 
	case 98: 
	case 99: 
	case 100: 
	case 101: 
	case 102: 
	case 103: 
	case 104: 
	case 105: 
	case 106: 
	case 107: 
	case 108: 
	case 109: 
	case 110: 
	case 111: 
	case 112: 
	case 113: 
	case 114: 
	case 115: 
	case 116: 
	case 117: 
	case 118: 
	case 119: 
	case 120: 
	case 121: 
	case 122: 
	case 123: 
	case 124: 
	case 125: 
	case 126: 
	case 127: 
	case 128: 
	case 129: 
	case 130: 
	case 131: 
	case 132: 
	case 133: 
	case 134: 
	case 135: 
	case 136: 
	case 137: 
	case 138: 
	case 139: 
	case 140: 
	case 141: 
	case 142: 
	case 143: 
	case 144: 
	case 145: 
	case 146: 
	case 147: 
	case 148: 
	case 149: 
	case 150: 
	case 151: 
	case 152: 
	case 153: 
	case 154: 
	case 155: 
	case 156: 
	case 157: 
	case 158: 
	case 159: 
	case 160: 
	case 161: 
	case 162: 
	case 163: 
	case 164: 
	case 165: 
	case 166: 
	case 167: 
	case 168: 
	case 169: 
	case 170: 
	case 171: 
	case 172: 
	case 173: 
	case 174: 
	case 175: 
	case 176: 
	case 177: 
	case 178: 
	case 179: 
	case 180: 
	case 181: 
	case 182: 
	case 183: 
	case 184: 
	case 185: 
	case 186: 
	case 187: 
	case 188: 
	case 189: 
	case 190: 
	case 191: 
	case 192: 
	case 193: 
	case 194: 
	case 195: 
	case 196: 
	case 197: 
	case 198: 
	case 199: 
	case 200: 
	case 201: 
	case 202: 
	case 203: 
	case 204: 
	case 205: 
	case 206: 
	case 207: 
	case 208: 
	case 209: 
	case 210: 
	case 211: 
	case 212: 
	case 213: 
	case 214: 
	case 215: 
	case 216: 
	case 217: 
	case 218: 
	case 219: 
	case 220: 
	case 221: 
	case 222: 
	case 223: 
	case 224: 
	case 225: 
	case 226: 
	case 227: 
	case 228: 
	case 229: 
	case 230: 
	case 231: 
	case 232: 
	case 233: 
	case 234: 
	case 235: 
	case 236: 
	case 237: 
	case 238: 
	case 239: 
	case 240: 
	case 241: 
	case 242: 
	case 243: 
	case 244: 
	case 245: 
	case 246: 
	case 247: 
	case 248: 
	case 249: 
	case 250: 
	case 251: 
	case 252: 
	case 253: 
	case 254: 
	case 255: 
	case 256: 
	case 257: 
	case 258: 
	case 259: 
	case 260: 
	case 261: 
	case 262: 
	case 263: 
	case 264: 
	case 265: 
	case 266: 
	case 267: 
	case 268: 
	case 269: 
	case 270: 
	case 271: 
	case 272: 
	case 273: 
	case 274: 
	case 275: 
	case 276: 
	case 277: 
	case 278: 
	case 279: 
	case 280: 
	case 281: 
	case 282: 
	case 283: 
	case 284: 
	case 285: 
	case 286: 
	case 287: 
	case 288: 
	case 289: 
	case 290: 
	case 291: 
	case 292: 
	case 293: 
	case 294: 
	case 295: 
	case 296: 
	case 297: 
	case 298: 
	case 299: 
	case 300: 
	case 301: 
	case 302: 
	case 303: 
	case 304: 
	case 305: 
	case 306: 
	case 307: 
	case 308: 
	case 309: 
	case 310: 
	case 311: 
	case 312: 
	case 313: 
	case 314: 
	case 315: 
	case 316: 
	case 317: 
	case 318: 
	case 319: 
	case 320: 
	case 321: 
	case 322: 
	case 323: 
	case 324: 
	case 325: 
	case 326: 
	case 327: 
	case 328: 
	case 329: 
	case 330: 
#line 165 "stomp.rl"
	{ stomp->msg.cb = &cmd_protocolError;
	                                                               stomp_executeCommand(stomp); 
																   goto failure; }
	break;
#line 5262 "clientfsm.c"
	}
	}

	_out: {}
	}

#line 37 "clientfsm.rl"

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
