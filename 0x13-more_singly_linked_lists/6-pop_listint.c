#include "lists.h"

/**
 *pop_listint - delete from linked list
 *@head:linked list pointer
 *Return:int
 *
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *holder;
	int j;

	holder = *head;
	if (head == NULL || *head == NULL)
		return (0);

	*head = holder->next;
	j = holder->n;
	free(holder);
	return (j);

}
