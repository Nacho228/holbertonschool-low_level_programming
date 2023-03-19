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
	int i;
	int *arr;
	int size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *) malloc(sizeof(int) * (max - min + 1));

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	return (arr);
}
