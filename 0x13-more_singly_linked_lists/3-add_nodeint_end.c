#include "lists.h"


/**
 *add_nodeint_end - adding at the node
 *@head:int
 *@n:int
 *Return:listint_t
 *
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *holder = malloc(sizeof(listint_t));
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	if (holder == NULL)
		return (NULL);
	holder->n = n;
	holder->next = NULL;
	if (*head == NULL)
	{
		*head = holder;
		return (holder);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = holder;
	return (holder);
}
