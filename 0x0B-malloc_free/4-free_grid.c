#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function to free the grid
 * @grid: grid of memories
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
