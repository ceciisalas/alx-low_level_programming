#include "lists.h"
/**
 * sum_dlistint - sum all elements of a double list
 * @head: head of he list
 *
 * Return: Always 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i-next)
	{
		sum += i->n;
	}
	return (sum);
}
