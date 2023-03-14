#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensioanl array of intergers
 * @width: width of the grid
 * @height: height of the grid
 * Return: NULL on failure if width or height is 0 || -1 return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j, n;
	int **ptr;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(ptr[i]);
			}

			free(ptr);
			return (NULL);
		}
	}

	for (j = 0; i < height; j++)
	{
		for (n = 0; n < width; n++)
		{
			ptr[j][n] = 0;
		}
	}

	return (ptr);
}
