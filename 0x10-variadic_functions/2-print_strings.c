#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *print_strings - functions to
 *@separator:constant character that passed to the function
 *@n:int
 *
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
