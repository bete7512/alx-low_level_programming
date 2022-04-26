#include "main.h"

/**
 *print_line - here it is used for printing  a ne line
 *
 *@n: this
 *
 *
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
