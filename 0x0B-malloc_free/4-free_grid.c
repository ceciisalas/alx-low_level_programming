#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees 2 dimensional grid previously created 
 * @grid: 2 dimensional array
 * @height: height of the grid
 *
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
