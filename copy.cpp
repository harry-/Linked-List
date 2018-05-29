#include "copy.h"

/* "sichere" Kopierfunktionen */

void copy2(const char* from, char* to)
{
#ifdef msvs
	strcpy_s(to, strlen(from) + 1, from);
#elif gcc
	strncpy(to, from, strlen(from) + 1);
#endif
}