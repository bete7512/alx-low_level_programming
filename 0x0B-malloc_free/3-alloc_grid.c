#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - main
 *@width:int
 *@height:int
 *Return:int
 *
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **array;
	int j;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			free(array);
			return (NULL);
		}
		for (j = 0; j <= width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
