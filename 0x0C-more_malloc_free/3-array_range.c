#include "main.h"
#include <stdlib.h>
/**
 *array_range - function
 *@min:int
 *@max:int
 *Return:int
 */
int *array_range(int min, int max)
{
	int i;
	int len;
	int  *s;

	if (min > max)
		return (NULL);
	len = 0;
	for (i = min; i <= max; i++)
		len++;
	s = malloc(sizeof(int) * len);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (s);
}
