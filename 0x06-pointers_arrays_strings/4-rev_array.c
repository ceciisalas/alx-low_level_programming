#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: first int
 * @n: number of elements
 *
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int b, c, d;

	b = 0;
	c = n - 1;

	while (b < c)
	{
		d = a[b];
		a[b] = a[c];
		a[c] = d;
		b++;
		c--;
	}
}
