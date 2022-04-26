#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Delete a node at a given position
 * @head: Head of the list
 * @index: Address
 * Return: 0 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsgined int i;
	listint_t *firstList, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	firstList = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (firstList->next == NULL)
			return (-1);
		firstList = firstList->next;
	}
	next = firstList->next;
	firstList->next = next->next;
	free(next);
	return (1);
}
