#ifndef _last_error_h_
#define _last_error_h_ 1

#ifdef _WIN32
const char* _last_win_error();
const char* _last_win_error_with_code(unsigned long code);
#endif

const char* _last_crt_error();
const char* _last_crt_error_with_code(int code);

#endif // _last_error_h_