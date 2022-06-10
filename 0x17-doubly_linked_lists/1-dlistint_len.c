#include "lists.h"
/**
 *
 *
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t k = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		k++;
		h = h->next;
	}
	return (k);
}
