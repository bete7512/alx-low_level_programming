#include "lists.h"

/**
 *print_listint - print linked list
 *@h:linked list pointer
 *Return:int
 *
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (m);
}
