#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator - functions that recieves array, size and function pointer
 *@array:array input from caller
 *@size:size of array
 *@action:function pointer that points function
 *
 */

void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
