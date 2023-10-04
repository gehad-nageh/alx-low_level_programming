#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * @grid: int
 * @height: int
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int j = 0;

	for (; j < height; j++)
		free(grid[j]);
	free(grid);
}
