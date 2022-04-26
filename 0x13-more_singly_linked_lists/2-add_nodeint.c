#include "lists.h"

/**
 *add_nodeint - adding list
 *@head:linked list pointer
 *@n:data
 *Return:listint_t
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *holder;

	holder = malloc(sizeof(listint_t));
	if (holder == NULL)
		return (NULL);

	holder->n = n;
	holder->next = *head;
	*head = holder;
	return (holder);

}
