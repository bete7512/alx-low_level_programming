#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @m: The number in question.
 *
 *Return: value of the last digit
 */
int print_last_digit(int m)
{
	int last = m % 10;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);

}
