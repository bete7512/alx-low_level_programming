#include "lists.h"


/**
 *delete_nodeint_at_index - delete node at index
 *@head:linked list pointer
 *@index:int
 *Return:int
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *holder, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	holder = *head;
	if (index == 0)
	{
		*head = holder->next;
		free(holder);
		return (1);
	}
	while (holder != NULL && i < index)
	{
		if (index - 1 == i)
		{
			temp = holder->next;
			holder->next = temp->next;
			free(temp);
			return (1);
		}
		holder = holder->next;
		i++;
	}
	free(holder);
	return (-1);
}
