#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - No of elements of a double linked list
 * @h: node
 * Return: no of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (n);
}
