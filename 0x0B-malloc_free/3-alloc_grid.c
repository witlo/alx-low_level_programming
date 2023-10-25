#include <stdlib.h>

/**
* alloc_grid - Generates a 2D integer array
*
* @width: Rows of the 2D array
* @height: Columns of the 2D array
*
* Return: Pointer to the 2D integer array
*/

int **alloc_grid(int width, int height)
{
	int i, j, k, **grid;

	if (width <= 0 || height <= 0)
		return ('\0');

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (k = i; k >= 0; k--)
				free(grid[k]);

			free(grid);
			return ('\0');
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
