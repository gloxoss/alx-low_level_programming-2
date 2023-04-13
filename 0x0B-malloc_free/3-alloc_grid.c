#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * alloc_grid - get pointer to 2D int array
  * @width: int
  * @height: int
  * Return: int**
  */
int **alloc_grid(int width, int height)
{
	int i, j, x, y, **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (int **) malloc(height * sizeof(int *));

		if (!ptr)
		{
			free(ptr);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			ptr[i] = (int *) malloc(width * sizeof(int));
			if (!ptr[i])
			{
				for (j = 0; j <= i; j++)
					free(ptr[j]);
				free(ptr);
				return (NULL);
			}
		}
		for (x = 0; x < height; x++)
		{
			for (y = 0; y < width; y++)
				ptr[x][y] = 0;
		}
		return (ptr);
	}
}
