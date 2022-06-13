#include "main.h"

/**
 *_strstr - chr
 *@haystack:char
 *@needle:cjhra
 *Return:char
 */

char *_strstr(char *haystack, char *needle)
{
	int i, pos;
	char *ptr;

	for (i = 0; haystack[i] != '\0'; i++)
		continue;
	pos = i;
	if (*needle == '\0')
		return (haystack);
	for (i = 0; i < pos; i++)
	{
		if (*(haystack + i) == *needle)
		{
			ptr = _strstr(haystack + i + 1, needle + 1);
			return ((ptr) ? (ptr - 1) : (0));
		}
	}
	return (0);
}
