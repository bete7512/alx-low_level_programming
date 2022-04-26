#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - functions to print string using function pointer
 *@name:pointer refers name to be printed
 *@f:pointer to point functions that recieves character
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);

}
