#include "main.h"
/**
 *_memcpy - memory copy
 *@dest:char
 *@src:char
 *@n:int
 *Return:char
 *
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
