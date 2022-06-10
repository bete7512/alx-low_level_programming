#include "lists.h"
/**
 *
 *
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		while (*head != NULL)
		{
			if (*head->next == NUll)
			{
				temp->prev = *head;
				*head->next = temp;
			}
			*head = *head->next;
		}
	}
	return (*head);
}
