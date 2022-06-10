#include "lists.h"
/**
 *get_dnodeint_at_index - functions to get pointer at index
 *@head: lists
 *@index:index of
 *Return:list type
 *
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head && i <= index)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
