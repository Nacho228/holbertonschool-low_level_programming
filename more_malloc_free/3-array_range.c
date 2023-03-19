#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - contain all values from min to max
 * @min: minimum value.
 * @max: maximum value.
 * Return: arr.
 */
int *array_range(int min, int max)
{
	int i = 0;
	int size = max - min + 1;
	int *arr = (int *) malloc(sizeof(int) * size);

	for (; i < size; i++)
	{
		arr[i] = min + i;
	}

	if (min > max)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	return (arr);
}
