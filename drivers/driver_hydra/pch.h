#pragma once

#ifdef __linux__ 
//TODO
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
inline int Sleep(int sleepMs) { return usleep(sleepMs * 1000); }
#define stricmp strcasecmp
//#define vsprintf_s vsprintf
#define sprintf_s snprintf
#define _snprintf snprintf


#elif _WIN32
#include "targetver.h"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <windows.h>
#else
#endif
