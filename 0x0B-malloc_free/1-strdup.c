#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - function
 *@str:int
 *Return:char
 *
 *
 *
 */

char *_strdup(char *str)
{
	char *new;
	int i;
	int holder;

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
			continue;
		holder = i + 1;
		new = malloc(sizeof(char) * (holder));
		if (new == NULL)
		{
			return (0);
		}
		else
		{
			for (i = 0; i <= holder; i++)
			{
				new[i] = str[i];
			}
		}
	}
	new[holder + 1] = '\0';
	return (new);
}
