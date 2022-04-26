#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - functions for addition
 *@a:int
 *@b:int
 *Return:int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracting numbers
 * @a:int
 * @b:int
 * Return:int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - dividing numbers
 * @a:int
 * @b:int
 * Return:int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mul - multiplication
 * @a:int
 * @b:int
 * Return:int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_mod - int
 * @a:int
 * @b:int
 * Return:int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
