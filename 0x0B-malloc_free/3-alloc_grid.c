#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width to be input
 * @height: height to be input
 * Return: pointer to 2 dimensional  array
 */
int **alloc_grid(int width, int height)
{
	int **k;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	k = malloc(sizeof(int *) * height);

	if (k == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		k[x] = malloc(sizeof(int) * width);

		if (k[x] == NULL)
		{
			for (; x >= 0; x--)
				free(k[x]);

			free(k);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			k[x][y] = 0;
	}

	return (k);
}
