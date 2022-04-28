#include "main.h"

/**
 *print_binary - int
 *@n:int
 *
 *
 */
void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}

	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
