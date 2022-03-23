#include "main..h"
/**
 * reverse_array - Reverse content of an array of integers
 * @a: integer
 * @n: number of elements of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (int i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}
}
