#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry
 *@argc:int
 *@argv:char
 *Return:int
 */
int main(int argc, char *argv[])
{
	int counter, i, holder, q;
	int arra[] = {25, 10, 5, 2, 1};

	counter = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	holder = atoi(argv[1]);
	if (holder < 1)
		printf("0\n");
	else
	{
		for (i = 0; i < 5 && holder; i++)
		{
			q = holder / arra[i];
			counter += q;
			holder -= q * arra[i];
		}
		printf("%d\n", counter);
	}
	return (0);
}
