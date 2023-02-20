#include <limits.h>
#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: input number.
 * Return: 1 if ledssdsctter, 0 if else.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}

else
{
if (n < 0)
{
_putchar ('-');
return (-1);
}

else
{
return (0);
_putchar ('0');
}
_putchar('\n');
}
}
