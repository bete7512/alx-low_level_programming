#include <stdio.h>

/**
 *main -entry
 *@argc:int
 *@argv:char
 *Return:int
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
