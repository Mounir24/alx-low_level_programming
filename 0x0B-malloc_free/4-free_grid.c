#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *free_grid - main function
  *@grid : parameter 1
  *@height : parameter 2
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
