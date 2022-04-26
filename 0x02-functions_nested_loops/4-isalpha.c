#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 *
 * @c: single letter input
 *
 *Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
