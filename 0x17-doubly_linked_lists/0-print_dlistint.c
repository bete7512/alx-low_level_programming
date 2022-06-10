#include "lists.h"

/**
 *print_dlistint - print and return number of data in a linked list
 *@h:pointers passed to our function
 *Return: type size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t k = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}
	return (k);
}
