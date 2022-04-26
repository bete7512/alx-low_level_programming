#include "main.h"

/**
 *puts2 - callee
 *@str:parameter
 *
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
		continue;
	i = i - 1;
	for (j = 0; j <= i; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
