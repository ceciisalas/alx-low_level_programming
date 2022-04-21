#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Add node at the beginning of a list_t
 * @head: first node
 * @str: string to add to the list
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int len = 0;

	while (str[len])
		len++;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);

	add->str = strdup(str);
	add->len = len;
	add->next = (*head);
	(*head) = add;

	return (*head);
}
