#include "lists.h"

/**
 *insert_nodeint_at_index - insert node
 *@head:linked list pointer
 *@idx:unsigned int
 *@n:int
 *Return:listint_t
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *holder;
	unsigned int i = 0;
	listint_t *temp = *head;

	holder = malloc(sizeof(listint_t));
	if (holder == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	holder->n = n;
	holder->next = NULL;
	if (temp == NULL)
	{
		temp = holder;
		*head = temp;
		return (holder);
	}
	while (temp != NULL)
	{
		if (idx - 1 == i)
		{
			holder->next = temp->next;
			temp->next = holder;
			return (holder);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
