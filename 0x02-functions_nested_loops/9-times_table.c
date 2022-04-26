#include "main.h"

/**
 *times_table - having mind
 *
 *
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			if ((i * j) > 9)
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			else
			{
				 _putchar(' ');
				 _putchar((i * j) + '0');
			}
		}
		_putchar('\n');

	}


}

