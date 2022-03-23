#include "main..h"
/**
 * reverse_array - Reverse content of an array of integers
 * @a: integer
 * @n: number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, j, k;
	int c;

	j  = n - 1;
	k = j / 2;

	while (i <= k)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
		i++;
		j--;
	}
