#include "main.h"
#include <stdlib.h>
/**
 *str_concat - function
 *@s1:char
 *@s2:char
 *Return:cha
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int i, j, holder1, holder2, total;

	if (s1 == NULL)
		holder1 = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			continue;
		holder1 = i;
	}
	if (s2 == NULL)
		holder2 = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			continue;
		holder2 = j;
	}
	total = holder1 + holder2 + 1;
	new = malloc(sizeof(char) * total);
	if (new == NULL)
		return (NULL);
	for (i = 0; i <  holder1; i++)
		new[i] = s1[i];
	for (j = 0; j < holder2; j++)
		new[i + j] = s2[j];
	new[holder1 + holder2] = '\0';
	return (new);
}
