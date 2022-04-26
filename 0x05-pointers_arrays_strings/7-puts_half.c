#include "main.h"

/**
 *puts_half - just the way
 *@str:parameter
 *
 *
 */
void puts_half(char *str)
{
	int n;
	int i;
	int length_of_the_string;

	for (n = 0; str[n] != '\0'; n++)
		continue;
	n = n - 1;
	length_of_the_string = n;
	if (length_of_the_string % 2 != 0)
		n = (length_of_the_string - 1) / 2;
	else
		n = length_of_the_string / 2;
	for (i = n + 1; i <= length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

