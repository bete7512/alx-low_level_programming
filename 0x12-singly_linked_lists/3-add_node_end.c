#include "lists.h"




/**
 *_strlen - string counter
 *@str:string to be counted
 *Return:unsigned int
 *
 *
 */
unsigned int _strlen(const char *str)
{
	unsigned int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 *add_node_end - add links to the end
 *@head:head arguments to be given lists to be listed
 *@str:string
 *Return:unsigned int
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int j;
	list_t *holder;
	list_t *temp;

	holder = malloc(sizeof(list_t));
	if (holder == NULL)
		return (NULL);
	holder->str = strdup(str);
	if (!holder->str)
	{
		free(holder);
		return (NULL);
	}
	j = _strlen(str);
	holder->len = j;
	holder->next = NULL;
	if (*head == NULL)
		*head = holder;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = holder;
		holder = temp;

	}
	return (holder);
}
