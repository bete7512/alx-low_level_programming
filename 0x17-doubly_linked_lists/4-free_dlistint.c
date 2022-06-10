#include "lists.h"
/**
 *free_dlistint - free making memory
 *@head:linked lists to be freed
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
