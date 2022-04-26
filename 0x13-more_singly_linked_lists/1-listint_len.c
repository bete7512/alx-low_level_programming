#include "lists.h"

/**
 *listint_len - lister
 *@h:linked list pointer
 *Return:size_t
 *
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *holder = h;
	size_t m = 0;

	if (holder == NULL)
		return (0);

	while (holder != NULL)
	{
		holder = holder->next;
		m++;
	}
	return (m);
}
