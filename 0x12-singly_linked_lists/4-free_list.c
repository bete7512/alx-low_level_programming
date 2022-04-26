#include "lists.h"

/**
 *free_list - functions to free list
 *@head:list
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
