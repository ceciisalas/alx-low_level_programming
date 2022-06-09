#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (n);
}
