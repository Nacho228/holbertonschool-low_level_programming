#include "main.h"
/**
 * reverse_array - Reverses an array.
 * @a: Array to reverse.
 * @n: size of the array.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int aux;
	int B, r;

	for (B = 0, n - 1 = r; r > B; B++, r--)
	{
		aux = a[B];
		a[B] = a[r];
		a[r] = aux;
	}
}

