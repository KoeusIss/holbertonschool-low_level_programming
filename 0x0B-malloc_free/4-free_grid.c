#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free a two dimensional grid
 * @grid: the given grid
 * @height: the given height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;
	int j;

	i = 0;
	while(i < height)
	{
		j = 0;
		while (j < i)
		{
			free(grid[i]);
			j++;
		}
		free(grid);
		i++;
	}
}
