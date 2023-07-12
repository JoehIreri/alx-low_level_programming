#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int a, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		mee[a] = malloc(sizeof(int) * width);

		if (mee[a] == NULL)
		{
			for (; a >= 0; a--)
				free(mee[a]);

			free(mee);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (c = 0; c < width; c++)
			mee[a][c] = 0;
	}

	return (mee);
}
