#include <stdlib.h>

#ifndef _strlib_
#define _strlib_

int str_lenght(char *str);

char *str_duplicate(char *str);

int str_compare(char *strA, char *strB);

int str_reverse(char *str);

int str_upper(char *str);

int str_lower(char *str);

int str_copy(char *dst, char *scr);

#endif