#include <stdio.h>
#include "lists.h"
/**
 * print_list - Print all the elements of a linked list
 * @h: pointer to the list to print
 *
 * Return: Printed list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			print("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
