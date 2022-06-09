#include "lists.h"
/**
 * free_dlistint - free double linked list
 * @head: head of the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	d_listint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
