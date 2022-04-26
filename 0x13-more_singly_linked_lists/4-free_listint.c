#include "lists.h"

/**
 *free_listint - free's data on the linked list
 *@head:listint_t
 *
 *
 *
 */

void free_listint(listint_t *head)
{
	listint_t *holder;

	while (head != NULL)
	{
		holder = head;
		head = head->next;
		free(holder);
	}
}
