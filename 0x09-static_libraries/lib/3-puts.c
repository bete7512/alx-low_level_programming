#include "main.h"

/**
 *_puts - function to display
 *@str:parameter for the function
 *
 *
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
