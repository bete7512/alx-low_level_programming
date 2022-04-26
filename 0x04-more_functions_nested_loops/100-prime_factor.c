#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * main - Prints the larget prime factor teh numbe
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxf = number / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
