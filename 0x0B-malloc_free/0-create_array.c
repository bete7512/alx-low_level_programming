#include "main.h"
#include <stdlib.h>

/**
 *create_array - the function for memory allocation
 *@size: unsigned int
 *@c:char
 *Return:pointer
 *
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;


	if (size == 0)
	{
		return (0);
	}
	else
	{
		t = malloc(sizeof(char) * size);
		if (t == 0)
		{
			return (0);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				t[i] = c;
			}
		}
	}
	return (t);
}
