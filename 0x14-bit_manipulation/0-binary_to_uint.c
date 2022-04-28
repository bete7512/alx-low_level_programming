#include "main.h"


/**
 *binary_to_uint - changes binary to unsigned int
 *@b:pointer
 *Return:unsigned int
 *
 *
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num <<= 1;

		if (b[i] == '1')
			num += 1;
	}

	return (num);
}
