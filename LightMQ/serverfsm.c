
#line 1 "serverfsm.rl"

#include "stomp.h"

#ifdef __cplusplus
extern "C"
{
#endif


#line 17 "serverfsm.rl"



#line 2 "serverfsm.c"
static const char _stomp_server_fsm_actions[] = {
	0, 1, 1, 1, 3, 1, 4, 1, 
	5, 1, 6, 1, 7, 1, 8, 1, 
	9, 1, 10, 1, 11, 1, 12, 1, 
	13, 1, 14, 2, 0, 1, 2, 2, 
	15, 2, 2, 16, 2, 17, 1
};

static const char _stomp_server_fsm_key_offsets[] = {
	0, 0, 7, 9, 10, 11, 12, 13, 
	17, 21, 22, 23, 24, 28, 30, 34, 
	35, 36, 37, 38, 39, 40, 41, 42, 
	44, 45, 46, 47, 48, 49, 50, 51, 
	52, 53, 54, 55, 56, 57, 58, 59, 
	60, 61, 62, 63, 64, 65, 66, 67, 
	70, 71, 72, 73, 74, 75, 76, 77, 
	78, 79, 80, 81, 82, 83, 84, 85, 
	86, 87, 88, 89, 90, 91, 92, 93, 
	94, 95, 96
};

static const char _stomp_server_fsm_trans_keys[] = {
	65, 66, 67, 68, 78, 83, 85, 66, 
	67, 79, 82, 84, 10, 10, 92, 0, 
	127, 10, 92, 0, 127, 58, 10, 10, 
	10, 92, 0, 127, 0, 58, 34, 92, 
	99, 110, 75, 10, 69, 71, 73, 78, 
	10, 79, 77, 78, 77, 73, 84, 10, 
	78, 69, 67, 84, 10, 73, 83, 67, 
	79, 78, 78, 69, 67, 84, 10, 65, 
	67, 75, 10, 69, 84, 85, 78, 68, 
	10, 79, 77, 80, 10, 66, 83, 67, 
	82, 73, 66, 69, 10, 78, 83, 85, 
	66, 83, 67, 82, 73, 66, 69, 10, 
	0
};

static const char _stomp_server_fsm_single_lengths[] = {
	0, 7, 2, 1, 1, 1, 1, 2, 
	2, 1, 1, 1, 2, 2, 4, 1, 
	1, 1, 1, 1, 1, 1, 1, 2, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 3, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0
};

static const char _stomp_server_fsm_range_lengths[] = {
	0, 0, 0, 0, 0, 0, 0, 1, 
	1, 0, 0, 0, 1, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0
};

static const unsigned char _stomp_server_fsm_index_offsets[] = {
	0, 0, 8, 11, 13, 15, 17, 19, 
	23, 27, 29, 31, 33, 37, 40, 45, 
	47, 49, 51, 53, 55, 57, 59, 61, 
	64, 66, 68, 70, 72, 74, 76, 78, 
	80, 82, 84, 86, 88, 90, 92, 94, 
	96, 98, 100, 102, 104, 106, 108, 110, 
	114, 116, 118, 120, 122, 124, 126, 128, 
	130, 132, 134, 136, 138, 140, 142, 144, 
	146, 148, 150, 152, 154, 156, 158, 160, 
	162, 164, 166
};

static const char _stomp_server_fsm_trans_targs[] = {
	2, 17, 22, 33, 43, 47, 63, 0, 
	3, 15, 0, 4, 0, 5, 0, 6, 
	0, 7, 0, 13, 14, 8, 0, 9, 
	14, 8, 0, 10, 0, 0, 11, 12, 
	11, 13, 14, 8, 0, 74, 10, 0, 
	8, 8, 8, 8, 0, 16, 0, 7, 
	0, 18, 0, 19, 0, 20, 0, 21, 
	0, 7, 0, 23, 0, 24, 28, 0, 
	25, 0, 26, 0, 27, 0, 7, 0, 
	29, 0, 30, 0, 31, 0, 32, 0, 
	7, 0, 34, 0, 35, 0, 36, 0, 
	37, 0, 38, 0, 39, 0, 40, 0, 
	41, 0, 42, 0, 7, 0, 44, 0, 
	45, 0, 46, 0, 7, 0, 48, 51, 
	55, 0, 49, 0, 50, 0, 7, 0, 
	52, 0, 53, 0, 54, 0, 7, 0, 
	56, 0, 57, 0, 58, 0, 59, 0, 
	60, 0, 61, 0, 62, 0, 7, 0, 
	64, 0, 65, 0, 66, 0, 67, 0, 
	68, 0, 69, 0, 70, 0, 71, 0, 
	72, 0, 73, 0, 7, 0, 0, 0
};

static const char _stomp_server_fsm_trans_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 15, 0, 1, 1, 1, 0, 0, 
	0, 0, 0, 30, 0, 0, 1, 33, 
	0, 36, 36, 36, 0, 3, 30, 0, 
	27, 27, 27, 27, 0, 0, 0, 17, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 11, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 13, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	23, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 21, 0, 0, 0, 
	0, 0, 0, 0, 19, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 5, 0, 
	0, 0, 0, 0, 0, 0, 25, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 7, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 9, 0, 0, 0
};

static const int stomp_server_fsm_start = 1;
static const int stomp_server_fsm_first_final = 74;
static const int stomp_server_fsm_error = 0;

static const int stomp_server_fsm_en_main = 1;


#line 20 "serverfsm.rl"




void stomp_server_init(stomp_t *stomp) {

	STOMP_INIT(stomp);

	
#line 132 "serverfsm.c"
	{
	 stomp->cs = stomp_server_fsm_start;
	}

#line 29 "serverfsm.rl"
}

void stomp_server_execute(stomp_t *stomp, const char *data, int len, int isEof) {
	const char *p = data;
	const char *pe = data + len;
	const char *eof = isEof ? pe : 0;

	
#line 135 "serverfsm.c"
	{
	int _klen;
	unsigned int _trans;
	const char *_acts;
	unsigned int _nacts;
	const char *_keys;

	if ( p == pe )
		goto _test_eof;
	if (  stomp->cs == 0 )
		goto _out;
_resume:
	_keys = _stomp_server_fsm_trans_keys + _stomp_server_fsm_key_offsets[ stomp->cs];
	_trans = _stomp_server_fsm_index_offsets[ stomp->cs];

	_klen = _stomp_server_fsm_single_lengths[ stomp->cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + _klen - 1;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + ((_upper-_lower) >> 1);
			if ( (*p) < *_mid )
				_upper = _mid - 1;
			else if ( (*p) > *_mid )
				_lower = _mid + 1;
			else {
				_trans += (_mid - _keys);
				goto _match;
			}
		}
		_keys += _klen;
		_trans += _klen;
	}

	_klen = _stomp_server_fsm_range_lengths[ stomp->cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + (_klen<<1) - 2;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + (((_upper-_lower) >> 1) & ~1);
			if ( (*p) < _mid[0] )
				_upper = _mid - 2;
			else if ( (*p) > _mid[1] )
				_lower = _mid + 2;
			else {
				_trans += ((_mid - _keys)>>1);
				goto _match;
			}
		}
		_trans += _klen;
	}

_match:
	 stomp->cs = _stomp_server_fsm_trans_targs[_trans];

	if ( _stomp_server_fsm_trans_actions[_trans] == 0 )
		goto _again;

	_acts = _stomp_server_fsm_actions + _stomp_server_fsm_trans_actions[_trans];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 )
	{
		switch ( *_acts++ )
		{
	case 0:
#line 6 "stomp.rl"
	{
		switch((*p)) {
			case '\\':      string_buffer_appendN(&stomp->buffer, (*p),   1); break;
			case 'n':       string_buffer_appendN(&stomp->buffer, '\n', 1); break;
			case 'c':       string_buffer_appendN(&stomp->buffer, ':', 1); break;
		}
    }
	break;
	case 1:
#line 14 "stomp.rl"
	{ stomp->mark = p; }
	break;
	case 2:
#line 17 "stomp.rl"
	{
		if (p - stomp->mark > 0) {
			string_buffer_appendLen(&stomp->buffer, stomp->mark, (p - stomp->mark));
        }
    }
	break;
	case 3:
#line 23 "stomp.rl"
	{

    }
	break;
	case 4:
#line 43 "stomp.rl"
	{ string_init(&stomp->command, "SEND", 4);         stomp->command_cb = &client_cmd_send; }
	break;
	case 5:
#line 44 "stomp.rl"
	{ string_init(&stomp->command, "SUBSCRIBE", 9);    stomp->command_cb = &client_cmd_subscribe; }
	break;
	case 6:
#line 45 "stomp.rl"
	{ string_init(&stomp->command, "UNSUBSCRIBE", 11); stomp->command_cb = &client_cmd_unsubscribe; }
	break;
	case 7:
#line 46 "stomp.rl"
	{ string_init(&stomp->command, "BEGIN", 5);        stomp->command_cb = &client_cmd_beginTransaction; }
	break;
	case 8:
#line 47 "stomp.rl"
	{ string_init(&stomp->command, "COMMIT", 6);       stomp->command_cb = &client_cmd_commitTransaction; }
	break;
	case 9:
#line 48 "stomp.rl"
	{ string_init(&stomp->command, "ABORT", 5);        stomp->command_cb = &client_cmd_abortTransaction; }
	break;
	case 10:
#line 49 "stomp.rl"
	{ string_init(&stomp->command, "ACK", 3);          stomp->command_cb = &client_cmd_ack; }
	break;
	case 11:
#line 50 "stomp.rl"
	{ string_init(&stomp->command, "NACK", 4);         stomp->command_cb = &client_cmd_nack; }
	break;
	case 12:
#line 51 "stomp.rl"
	{ string_init(&stomp->command, "DISCONNECT", 10);  stomp->command_cb = &client_cmd_disconnect; }
	break;
	case 13:
#line 52 "stomp.rl"
	{ string_init(&stomp->command, "CONNECT", 7);      stomp->command_cb = &client_cmd_connect; }
	break;
	case 14:
#line 53 "stomp.rl"
	{ string_init(&stomp->command, "STOMP", 5);        stomp->command_cb = &client_cmd_stomp; }
	break;
	case 15:
#line 62 "stomp.rl"
	{ string_buffer_release(&stomp->buffer, &stomp->name); STOMP_DEBUG(("name=%s", stomp->buffer.str)); }
	break;
	case 16:
#line 63 "stomp.rl"
	{ string_buffer_release(&stomp->buffer, &stomp->value); STOMP_DEBUG(("value=%s", stomp->buffer.str));}
	break;
	case 17:
#line 64 "stomp.rl"
	{ object_put_zerocopy(stomp->headers, stomp->name.str, &stomp->value); string_init(&stomp->name, 0, 0); string_init(&stomp->value, 0, 0); STOMP_DEBUG((""));}
	break;
#line 273 "serverfsm.c"
		}
	}

_again:
	if (  stomp->cs == 0 )
		goto _out;
	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	_out: {}
	}

#line 37 "serverfsm.rl"
}

int stomp_server_finish(stomp_t *stomp) {
	if ( stomp->cs == stomp_server_fsm_error ) {
		return -1;
	}
	if ( stomp->cs >= stomp_server_fsm_first_final ) {
		return 1;
	}
	return 0;
}

#ifdef __cplusplus
}
#endif
