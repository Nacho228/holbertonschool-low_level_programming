#include "main.h"

/**
 * print_square - function that draws a square in the terminal.
 * @size: Size of the square.
 */

void print_square(int size)
{
int c;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (c = 0 ; c < size; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
