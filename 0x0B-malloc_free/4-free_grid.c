#include <stdlib.h>

/**
* free_grid - Deallocates memory of a 2D array created by alloc_grid
*
* @grid: Target 2D array to be freed
* @height: Row count of the array
*
* Return: void
*/

void free_grid(int **grid, int height)
{
	int idx = 0;

	while (idx < height)
	{
		free(grid[idx]);
		idx++;
	}
	free(grid);
}
