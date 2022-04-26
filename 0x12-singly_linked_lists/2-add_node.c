#include "lists.h"

/**
 *_strlen - string length counter
 *@str:string to be counted
 *Return:unsigned int`
 *
 *
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 *add_node - returns added linked list at front
 *@head:pointers pointer
 *@str:pointer
 *Return:list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *holder;
	unsigned int i;

	holder = malloc(sizeof(list_t));
	if (holder == NULL)
		return (NULL);
	holder->str = strdup(str);
	i = _strlen(str);
	if (!holder->str)
	{
		free(holder);
		return (NULL);
	}
	holder->len = i;
	holder->next = *head;
	*head = holder;

	return (holder);

}
