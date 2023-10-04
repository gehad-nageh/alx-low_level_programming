#include "main.h"

/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: input int
 * @height: input int
 * Return: Nothing
 */

int **alloc_grid(int width, int height)
{
	int **area, i, j;

	area = malloc(sizeof(*area) * height);

	if (width <= 0 || height <= 0 || area == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			area[i] = malloc(sizeof(**area) * width);
			if (area[i] == 0)
			{
				while (i--)
					free(area[i]);
				free(area);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				area[i][j] = 0;
		}
	}

	return (area);

}
