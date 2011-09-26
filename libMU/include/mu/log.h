#ifndef _log_h_
#define _log_h_ 1

#include "mu/platform.h"


typedef struct _log_message
{
	void* context;
	const char* message;
	size_t length;
} log_message_t;

typedef void (*log_fn_t)(const log_message_t * const * msg, size_t n);

#define LOG_SYSTEM   9000
#define LOG_FATAL    8000
#define LOG_NONE     7000
#define LOG_ERROR    6000
#define LOG_WARN     5000
#define LOG_TRACE    4000
#define LOG_ALL      0000

DLL_VARIABLE void log_message(void* context, int level, const char* message);
DLL_VARIABLE void log_format (void* context, int level, const char* fmt, ...);
DLL_VARIABLE void log_vformat(void* context, int level, const char* fmt, va_list argList);


DLL_VARIABLE void log_init(log_fn_t cb);

#endif // _log_h_