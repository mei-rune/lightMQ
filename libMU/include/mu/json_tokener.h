#ifndef _json_tokener_h_
#define _json_tokener_h_ 1

#include "mu/platform.h"
#include "mu/object.h"

#ifdef __cplusplus
extern "C" {
#endif

DLL_VARIABLE object_t* json_parse_from_string(const char* data, size_t len);
DLL_VARIABLE object_t* json_parse_from_file(const char* name);


#ifdef __cplusplus
}
#endif

#endif
