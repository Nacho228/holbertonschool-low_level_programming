#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line in the terminal.
 * @n: Number of \ characters to print.
 */

void print_diagonal(int n)
{
int c;
if (n < 0)
{
_putchar('\n');
}
else
{
for (c = 0 ; c < n; c++)
{
_putchar('\\');
_putchar('\n');
}
}
}
