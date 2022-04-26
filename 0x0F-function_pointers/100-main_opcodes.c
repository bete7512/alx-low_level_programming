#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array containing all arguments
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int bytes, index;
	char *op_codes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	op_codes = (char *)main;

	for (index = 0; index < bytes - 1; index++)
		printf("%02hhx ", op_codes[index]);

	printf("%02hhx\n", op_codes[index]);

	return (0);
}

