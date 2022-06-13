#include "main.h"

/**
 * _isdigit - is a function to return digit to 1 and 0 for other
 *@c: this a parameter for function
 *Return: dfgvc
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
