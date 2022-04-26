#include "main.h"

/**
 *_strpbrk - char
 *@s: chaer
 *@accept:char
 *Return:val
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, pos;
	int get = 0;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	pos = i;
	for (i = 0; accept[i] != '\0'; i++)
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
				if (j <= pos)
				{
					pos = j;
					get = 1;
					break;
				}
		}
	if (get == 1)
		return (&s[pos]);
	else
		return (0);
}

