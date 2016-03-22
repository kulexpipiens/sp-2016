#include "basic.h"

void strim(char *s)
{
	s[strlen(s)-1] = 0;
}

void werror(const char* s, short code)
{
	printf("CHYBA: %s \n\n", s);
	exit(code);
}
