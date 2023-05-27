#include "search_algos.h"
/**
 * binary_search - searchs for a value with binary search.
 * @array: the array to look into.
 * @size: size of the array.
 * @value: value to look for.
 * Return: -1;
*/
int binary_search(int *array, size_t size, int value)
{
	size_t mid, low = 0, high = size - 1, i = 0;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (high > i)
				printf(", ");
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
		}
	return (-1);
}
