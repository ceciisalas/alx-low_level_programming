#include "lists.h"
/**
 * print_dlistint - function that prints all elements of a doubly linked list
 * @h: nodo
 * Return: All elements of doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	register int len = 0;

	if (h == NULL)
	{
		printf("%s", "Empty list");
	}
	while (h != NULL)
	{
		int new_node = h-> n;
		printf("%d\n", new_node);
		h = h->next;
		len++;
	}
	return (len);
}
