#include "search_algos.h"
/**
 * linear_search - search one by one items of the array.
 * @array: array to look into.
 * @size: size.
 * @value: value to find.
 * Return: index.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
