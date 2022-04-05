#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - Return pointer to a 2 dimensional array of integers
 * @width: integer
 * @height: integer
 *
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	arr = (int **) malloc(height * sizeof(int *));

	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
	}
	if (arr != NULL)
	{
		return (arr);
	}
	return (NULL);
}
