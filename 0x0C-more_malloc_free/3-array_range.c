#include "main.h"
/**
 * array_range - Array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: Always 0
 */
int *array_range(int min, int max)
{
	int *p;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	p = malloc(sizeof(int) * len);
	
	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = min++;
	}
	return (p);
}
