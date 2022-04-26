#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - function
 *@s1:char
 *@s2:char
 *@n:int
 *Return:char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int holder1, i, j, holder2, total;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	holder1 = i;
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j] != '\0'; j++)
		;
		holder2 = j;
	if (n >= holder2)
		n = holder2;
	total = holder1 + n + 1;
	m = malloc(sizeof(char) * total);
	if (m == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		m[i] = s1[i];
	for (j = holder1; j < holder1 + n; j++)
		m[j] = s2[j - holder1];
	m[j] = '\0';
	return (m);
}
