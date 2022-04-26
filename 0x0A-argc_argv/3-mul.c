#include <stdio.h>
#include "stdlib.h"

/**
 * main - entry point
 * @argc:point
 * @argv:char
 * Return:int
 */

int main(int argc, char *argv[])

{
	int mul;
	int x, z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		z = atoi(argv[2]);
		mul = x * z;
		printf("%d\n", mul);
	}
	return (0);
}
