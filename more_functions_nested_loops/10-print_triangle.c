#include "main.h"

/**
 * print_triangle - function that draws a triangle line in the terminal.
 * @size: Size of the triangle.
 */

void print_triangle(int size)
{
int c, d;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (c = 0 ; c < size; c++)
{
_putchar('\\');
_putchar('\n');
if (c + 1 < size)
{
for (d = c + 1; d > 0; d--)
_putchar('#');
}
}
}
}
