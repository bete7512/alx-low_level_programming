#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - functio
 *@size:size of array
 *@cmp:pointer points to function
 *@array:an array of pointer
 *Return:integer
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			k = i;
			break;
		}
		else
			k = -1;
	}

	return (k);
}
