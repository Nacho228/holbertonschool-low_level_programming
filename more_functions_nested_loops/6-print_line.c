#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: Number of _ characters to print.
 */

void print_line(int n)
{
int c;
for (c = 0 ; c < n; c++)
{
_putchar('_');
}
_putchar('\n');
}
