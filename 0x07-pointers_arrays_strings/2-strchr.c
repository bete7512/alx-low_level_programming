#include "main.h"
/**
 *_strchr - function for strring
 *@s:char
 *@b:char
 *Return:ff
 */


char *_strchr(char *s, char b)
{
	for (; *s; ++s)
		if (*s == b)
		{
			break;
		}
	return (s);
}
