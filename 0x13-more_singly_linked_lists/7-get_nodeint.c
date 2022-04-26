#include "lists.h"


/**
 *get_nodeint_at_index - index getting from linked list
 *@head:linked list pointer
 *@index:nth term
 *Return:listint_t
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);

}
