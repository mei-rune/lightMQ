%%{
	machine stomp_fsm;
	access stomp->;

	
    action add_unquote {
		switch(fc) {
			case '\\':      string_buffer_appendN(&stomp->buffer, fc,   1); break;
			case 'n':       string_buffer_appendN(&stomp->buffer, '\n', 1); break;
			case 'c':       string_buffer_appendN(&stomp->buffer, ':', 1); break;
		}
    }

	action string_begin_mark { stomp->mark = fpc; STOMP_DEBUG(("string begin %c", fc)); }


    action string_end_mark {
	    STOMP_DEBUG(("string end %c", fc));
		if (fpc - stomp->mark > 0) {
			string_buffer_appendLen(&stomp->buffer, stomp->mark, (fpc - stomp->mark));
        }
    }

    action readBody {
	    fcall BODY;
    }

	action processMessage{
	    stomp_executeCommand(stomp);
	}

	LF = '\n';
	NULL = '\0';

	NAME = ((any - '\n') (    start: (
				     ':'  -> final  
				   | '\n' -> final  
				   | '\\' -> unquote
				   | (0..9 | 11..57 | 59..91 | 93..127) -> start
			   ),
			   unquote: (
				   ["\\nc] >add_unquote -> start
			   ) @string_begin_mark
		  )) >string_begin_mark %*{ fhold;} %string_end_mark;

    
	VALUE = (any - '\n')+ >string_begin_mark %string_end_mark;

	CLIENT_COMMAND      =   "SEND"         %{ string_init(&stomp->command, "SEND", 4);         stomp->command_cb = &client_cmd_send; }
                          | "SUBSCRIBE"    %{ string_init(&stomp->command, "SUBSCRIBE", 9);    stomp->command_cb = &client_cmd_subscribe; }
                          | "UNSUBSCRIBE"  %{ string_init(&stomp->command, "UNSUBSCRIBE", 11); stomp->command_cb = &client_cmd_unsubscribe; }
                          | "BEGIN"        %{ string_init(&stomp->command, "BEGIN", 5);        stomp->command_cb = &client_cmd_beginTransaction; }
                          | "COMMIT"       %{ string_init(&stomp->command, "COMMIT", 6);       stomp->command_cb = &client_cmd_commitTransaction; }
                          | "ABORT"        %{ string_init(&stomp->command, "ABORT", 5);        stomp->command_cb = &client_cmd_abortTransaction; }
                          | "ACK"          %{ string_init(&stomp->command, "ACK", 3);          stomp->command_cb = &client_cmd_ack; }
                          | "NACK"         %{ string_init(&stomp->command, "NACK", 4);         stomp->command_cb = &client_cmd_nack; }
                          | "DISCONNECT"   %{ string_init(&stomp->command, "DISCONNECT", 10);  stomp->command_cb = &client_cmd_disconnect; }
                          | "CONNECT"      %{ string_init(&stomp->command, "CONNECT", 7);      stomp->command_cb = &client_cmd_connect; }
                          | "STOMP"        %{ string_init(&stomp->command, "STOMP", 5);        stomp->command_cb = &client_cmd_stomp; }
						  ;

    SERVER_COMMAND      =   "CONNECTED"    %{ string_init(&stomp->command, "CONNECTED", 9);    stomp->command_cb = &server_cmd_connected; }
                          | "MESSAGE"      %{ string_init(&stomp->command, "MESSAGE", 7);      stomp->command_cb = &server_cmd_message; }
                          | "RECEIPT"      %{ string_init(&stomp->command, "RECEIPT", 7);      stomp->command_cb = &server_cmd_receipt; }
                          | "ERROR"        %{ string_init(&stomp->command, "ERROR", 5);        stomp->command_cb = &server_cmd_error; }
						  ;

	HEADER = (
	        NAME       %{ string_buffer_release(&stomp->buffer, &stomp->name); STOMP_DEBUG(("name=%s", stomp->name.str)); } 
	        ':' VALUE  %{ string_buffer_release(&stomp->buffer, &stomp->value); STOMP_DEBUG(("value=%s", stomp->value.str));} 
			LF )       %{ object_put_zerocopy(stomp->headers, stomp->name.str, &stomp->value); 
						 STOMP_DEBUG(("name=%s", stomp->name.str)); 
						 STOMP_DEBUG(("value=%s", stomp->value.str));
						 STOMP_DEBUG((""));
			             string_init(&stomp->name, 0, 0);
						 string_init(&stomp->value, 0, 0); 
					    };


	CLIENT_MESSAGE = CLIENT_COMMAND LF HEADER* %readBody LF %processMessage NULL;

	SERVER_MESSAGE = SERVER_COMMAND LF HEADER* %readBody LF %processMessage NULL;

	
	CLIENT_STREAM = CLIENT_MESSAGE (LF* CLIENT_MESSAGE)*;

	SERVER_STREAM = CLIENT_MESSAGE (LF* CLIENT_MESSAGE)*;

    BODY := any* ${ p = stomp_readBody(stomp, p, pe); if(pe != p) { fret; } else { fhold; } };

}%%
