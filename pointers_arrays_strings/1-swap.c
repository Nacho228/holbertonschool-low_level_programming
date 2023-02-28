#include "main.h"

/**
 * swap_int - pointer to an int as parameter and updates its value to 98.
 * @a: integrer a.
 * @b: integrer b.
 * Return: void
 */

void swap_int (int *a, int *b)
{
int c;
c = 0;

c = *a;
*a = *b;
*b = c;
}
