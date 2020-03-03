#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a two dimensional grid with 0 filling
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid = NULL;

	/* Checks the null sizes */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* Allocates a memory for grid */
	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
				free(grid);
			return (NULL);
		}
		i++;
	}
	/* Final return */
	return (grid);
}
