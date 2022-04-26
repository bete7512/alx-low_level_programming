#include "main.h"
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char m[] = "_putchar";
	int i = 0;

	for (i = 0; i <= 7; i++)
	{
		_putchar(m[i]);
	}
	_putchar('\n');
	return (0);
}
