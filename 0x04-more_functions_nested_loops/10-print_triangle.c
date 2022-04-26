#include "main.h"
/**
 *print_triangle - dfgh
 *@size: dsfrtg
 */
void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < hash; index++)
				_putchar('#');

			if (hash == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
