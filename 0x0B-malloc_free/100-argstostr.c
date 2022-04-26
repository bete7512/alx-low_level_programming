#include "main.h"
#include <stdlib.h>
/**
 *argstostr - main
 *@ac:int
 *@av:char
 *Return:char
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;

	if (*av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			;
		}
		*(*(av + i) + j) = '\n';
	}
	return (*av);

}
