#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2 dimensional array of integers
 * @grid: Pointer to the array to free
 * @height: Height of the array
 *
 * This function frees the memory allocated by alloc_grid.
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
