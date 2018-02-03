#ifndef __MAIN_M__
#define __MAIN_M__

#include <stdio.h>

#ifdef DEBUG_M
#define printD(x) printf(x)
#else
#define printD(x)
#endif // DEBUG_M

#endif // __MAIN_M__
