#include "main.h"

/**
 *_pow_recursion - entry
 *@x:info
 *@y:int
 *Return:mm
 *
 */

int _pow_recursion(int x, int y)
{
	int k;

	if (y < 0)
		return (-1);
	else if (y != 0)
	{
		k = x * _pow_recursion(x, y - 1);
	}
	else
		return (1);
	return (k);

}
