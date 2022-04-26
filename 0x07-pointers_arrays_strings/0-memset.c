#include "main.h"
/**
 *_memset - function for memory setting
 *@s:char
 *@b:char
 *@n:int
 *Return:char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while(i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

