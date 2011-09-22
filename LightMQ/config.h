#ifndef _config_h_
#define _config_h_ 1


#define HAVE_SELECT 1
#define HAVE_SYS_SELECT_H 1


#define HAVE_POLL 1
#define HAVE_POLL_H 1

#ifdef _WIN32
#define poll WSAPoll
#include <winsock2.h>
#endif

#endif // _config_h_