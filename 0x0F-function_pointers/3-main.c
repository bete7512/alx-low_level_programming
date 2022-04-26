#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - function main
 *@argc:int
 *@argv:array argument passed during execution
 *Return:int
 */

int main(int argc, char *argv[])
{
	int a, b, c;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	fun = get_op_func(argv[2]);
	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}
		c = fun(a, b);
		printf("%d\n", c);
		return (0);
}
