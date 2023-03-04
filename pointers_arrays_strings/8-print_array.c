#include "main.h"
#include <stdio.h>
/**
 * print_array - Function that prints an array.
 * @n: numbers of elements to be printed.
 * @a: pointer that points to array.
 * Return: 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);

	if (i < n - 1)
	{
		printf(", ");
	}
	}
	printf("\n");
}

