#include "main.h"
/**
 * print_most_numbers - prints most numbers.
 *
 * Return: void.
 */

void print_most_numbers(void)
{
int c;
for (c = 48 ; c <= 57 ; c++)
{
_putchar('\n');
if (c != 50 && c != 52)
{
_putchar(c);
}
}
}
