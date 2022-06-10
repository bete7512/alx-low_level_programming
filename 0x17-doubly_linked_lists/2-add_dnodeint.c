#include "lists.h"
/**
 *add_dnodeint - functions that add node at the beginning
 *@n:parameters passed for the function
 *@head:lists
 *Return: returns lists type
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (*head);
}
