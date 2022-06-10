#include "lists.h"
/**
 *sum_dlistint - functions to sum the value inside the node
 *@head:lists passed to the lists
 *Return:its return type is integer
 *
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
