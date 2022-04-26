#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer to the first occurence of the character
 * or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int index, length;

	length = 0;

	while (s[length] != '\0')
		length++;

	for (index = 0; index <= length; index++)
		if (s[index] == c)
		{
			s = &s[index];
			return (s);
		}

	return ('\0');
}

