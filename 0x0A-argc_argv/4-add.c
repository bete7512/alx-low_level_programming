#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *checknum - entrty
 *@s:char
 *Return:int
 *
 */
int checknum(char *s)
{
	unsigned int i;

	i = 0;

	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}


/**
 *main - entry point
 *@argv:char
 *@argc:int
 *Return:arry
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int holder;

	sum = 0;
	i = 1;
	while (i < argc)
	{
		if (checknum(argv[i]))
		{
			holder =  atoi(argv[i]);
			sum += holder;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
