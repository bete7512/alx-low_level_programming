#include "main.h"
/**
 *_strlen - this is a function to do size of string
 *@s: this string parameter to do the task
 *Return: tyoes become integer
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;

	}
	return (i);
}
