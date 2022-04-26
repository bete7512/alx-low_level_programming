#include "lists.h"

/**
 *list_len - functions to count length
 *@h:integer
 *Return:size_t
 *
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (count);
}
