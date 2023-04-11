#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: point to grid
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	k = malloc(height * sizeof(int *));
	if (k == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		k[i] = malloc(width * sizeof(int));
		if (k[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(k[j]);
			}
			free(k);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			k[i][j] = 0;
		}
	}
	return (k);
}
