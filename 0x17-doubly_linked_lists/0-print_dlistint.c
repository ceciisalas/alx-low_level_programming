#include "lists.h"
/**
 * print_dlistint - function that prints all elements of a doubly linked list
 * @h: nodo
 * Return: All elements of doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t coount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		coount++;
		h = h-> next;
	}
	return(coount)
}
