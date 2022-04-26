#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 *print_list - prints linked list
 *@h:heads to link
 *Return:size_t
 *
 *
 *
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		j++;
		h = h->next;
	}
	return (j);
}
