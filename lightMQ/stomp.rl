%%{
	machine stomp_fsm;
	access stomp->;

	action add_char {
	  string_buffer_appendN(&stomp->buffer, fc,   1);
	}

	
	action add_char_with_validate {
	  string_buffer_appendN(&stomp->buffer, fc,   1);
	  if(stomp->buffer.len > 256) {
        stomp->msg.cb = &cmd_protocolError; 
        stomp_executeCommand(stomp); 
        goto failure; 
	  }	     
	}

    action add_unquote {
		switch(fc) {
			case '\\':      string_buffer_appendN(&stomp->buffer, fc,   1); break;
			case 'n':       string_buffer_appendN(&stomp->buffer, '\n', 1); break;
			case 'c':       string_buffer_appendN(&stomp->buffer, ':', 1); break;
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

	NAME = (any - '\n') $add_char
	       (    start: (
				     ':'  -> final  
				   | '\n' -> final  
				   | '\\' -> unquote
				   | (0..9 | 11..57 | 59..91 | 93..127) $add_char_with_validate -> start
			   ),
			   unquote: (
				   ["\\nc] >add_unquote -> start
			   ) 
		  ) %*{ fhold;};

    
	VALUE = (any - '\n') {1,256} $add_char;
	UNKNOW_COMMAND = (any - '\n')+ $add_char;

	CLIENT_UNKNOW_COMMAND = (UNKNOW_COMMAND - ("SEND" | "SUBSCRIBE" | "UNSUBSCRIBE" | "BEGIN" | "COMMIT" | "ABORT" | "ACK" | "NACK" | "DISCONNECT" | "CONNECT" | "STOMP" ));
	SERVER_UNKNOW_COMMAND = (UNKNOW_COMMAND - ("CONNECTED" | "MESSAGE" | "RECEIPT" | "ERROR" ));

	CLIENT_COMMAND      =   "SEND"         %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "SEND", 4);                
	                                          stomp->msg.cb = &stomp_client_cmd_send; 
											  string_truncate(&stomp->buffer, 0);
											 }
                          | "SUBSCRIBE"    %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "SUBSCRIBE", 9);           
	                                          stomp->msg.cb = &stomp_client_cmd_subscribe; 
											  string_truncate(&stomp->buffer, 0);
											 }
                          | "UNSUBSCRIBE"  %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "UNSUBSCRIBE", 11);        
	                                          stomp->msg.cb = &stomp_client_cmd_unsubscribe; 
											  string_truncate(&stomp->buffer, 0);
											 }
                          | "BEGIN"        %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "BEGIN", 5);               
	                                          stomp->msg.cb = &stomp_client_cmd_beginTransaction; 
											  string_truncate(&stomp->buffer, 0);
											 }
                          | "COMMIT"       %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "COMMIT", 6);              
	                                          stomp->msg.cb = &stomp_client_cmd_commitTransaction; 
											  string_truncate(&stomp->buffer, 0);
											 }
                          | "ABORT"        %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "ABORT", 5);              
	                                          stomp->msg.cb = &stomp_client_cmd_abortTransaction; 
											  string_truncate(&stomp->buffer, 0);
											 }
                          | "ACK"          %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "ACK", 3);                
	                                          stomp->msg.cb = &stomp_client_cmd_ack; 
											  string_truncate(&stomp->buffer, 0);
											 }
                          | "NACK"         %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "NACK", 4);               
	                                          stomp->msg.cb = &stomp_client_cmd_nack; 
											  string_truncate(&stomp->buffer, 0);
											 }
                          | "DISCONNECT"   %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "DISCONNECT", 10);        
	                                          stomp->msg.cb = &stomp_client_cmd_disconnect; 
											  string_truncate(&stomp->buffer, 0);
											 }
                          | "CONNECT"      %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "CONNECT", 7);            
	                                          stomp->msg.cb = &stomp_client_cmd_connect; 
											  string_truncate(&stomp->buffer, 0);
											 }
                          | "STOMP"        %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "STOMP", 5);              
	                                          stomp->msg.cb = &stomp_client_cmd_stomp; 
											  string_truncate(&stomp->buffer, 0);
											 }
                          | CLIENT_UNKNOW_COMMAND
						                   %{ stomp->msg.is_delete_cmd = true;
	                                          string_buffer_release(&stomp->buffer, &stomp->msg.command); 
	                                          stomp->msg.cb = &stomp_client_cmd_unknowCommand;
											 }
						  ;

    SERVER_COMMAND      =   "CONNECTED"    %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "CONNECTED", 9);          
	                                          stomp->msg.cb = &stomp_server_cmd_connected; 
											  string_truncate(&stomp->buffer, 0);
											  }
                          | "MESSAGE"      %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "MESSAGE", 7);            
	                                          stomp->msg.cb = &stomp_server_cmd_message; 
											  string_truncate(&stomp->buffer, 0);
											  }
                          | "RECEIPT"      %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "RECEIPT", 7);            
	                                          stomp->msg.cb = &stomp_server_cmd_receipt; 
											  string_truncate(&stomp->buffer, 0);
											  }
                          | "ERROR"        %{ stomp->msg.is_delete_cmd = false;
	                                          string_init(&stomp->msg.command, "ERROR", 5);              
	                                          stomp->msg.cb = &stomp_server_cmd_error; 
											  string_truncate(&stomp->buffer, 0);
											  }
                          | SERVER_UNKNOW_COMMAND $add_char
						                   %{ stomp->msg.is_delete_cmd = true;
	                                          string_buffer_release(&stomp->buffer, &stomp->msg.command);
	                                          stomp->msg.cb = &stomp_server_cmd_unknowCommand;
											  }
						  ;

	HEADER = (
	        NAME       %{ string_buffer_release(&stomp->buffer, &stomp->name); STOMP_DEBUG(("name=%s", stomp->name.str)); } 
	        . ':' . VALUE  %{ string_buffer_release(&stomp->buffer, &stomp->value); STOMP_DEBUG(("value=%s", stomp->value.str));}
			. LF )       %{ object_put_zerocopy(stomp->msg.headers, stomp->name.str, &stomp->value); 
						 STOMP_DEBUG(("name=%s", stomp->name.str)); 
						 STOMP_DEBUG(("value=%s", stomp->value.str));
						 STOMP_DEBUG((""));
			             string_init(&stomp->name, 0, 0);
						 string_init(&stomp->value, 0, 0); 
					    };


	CLIENT_MESSAGE = CLIENT_COMMAND LF HEADER* %readBody LF %processMessage NULL;

	SERVER_MESSAGE = SERVER_COMMAND LF HEADER* %readBody LF %processMessage NULL;

	
	CLIENT_STREAM = ( CLIENT_MESSAGE (LF* CLIENT_MESSAGE)* ) $err{ stomp->msg.cb = &cmd_protocolError;
	                                                               stomp_executeCommand(stomp); 
																   goto failure; };

	SERVER_STREAM = ( SERVER_MESSAGE (LF* SERVER_MESSAGE)* ) $err{ stomp->msg.cb = &cmd_protocolError; 
	                                                               stomp_executeCommand(stomp); 
																   goto failure; };

    BODY := any* ${ p = stomp_readBody(stomp, p, pe); 
					if(NULL == p) { 
						stomp->msg.cb = &cmd_protocolError; 
						stomp_executeCommand(stomp); 
						goto failure;
					} else if(pe != p) { 
						fret; 
					} else { 
						fhold; 
					} 
				  };

}%%
