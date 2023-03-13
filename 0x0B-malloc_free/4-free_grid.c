#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* free_grid - free 2D array
* @grid: 2D grid
* @height: height dimension of grid
* Description: free memory of grid
* Return: no
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
