#include "lists.h"
/**
 *dlistint_len - function for counter
 *@h:parameters for the function
 *Return:returns size_t
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
