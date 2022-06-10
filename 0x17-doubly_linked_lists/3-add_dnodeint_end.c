#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *holder = *head;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (*head == NULL)
		*head = temp;
	else
		while (*head != NULL)
		{
			if ((*head)->next == NULL)
			{
				temp->prev = holder;
				(*head)->next = temp;
				break;
			}
			holder = holder->next;
		}
	*head = temp;
	return temp;
}
