#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_numbers - functions for variadics
 *@separator:characteristcs
 *@n:integer
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");


}
