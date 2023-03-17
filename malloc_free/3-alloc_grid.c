#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array.
 * @width: width.
 * @height: height.
 * Return: str.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	array = malloc(sizeof(int *) * height);

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == 0)
		{

		for (j = 0; j < width; j++)
		{
			free(array[j]);
		}
		free(array);
		return (NULL);
		}
	}
return (array);
}
