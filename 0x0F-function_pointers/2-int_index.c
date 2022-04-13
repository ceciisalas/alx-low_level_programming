#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to function 
 *
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + 1)))
		{
			return (i);
		}
	}
	return (-1);
}
