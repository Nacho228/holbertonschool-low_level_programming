#include "main.h"
/**
 * more_numbers - prints more numbers.
 */

void more_numbers(void)
{
int c, b;
for (c = 0 ; c <= 9 ; c++)
{
for (b = 0 ; b <= 14; c++)
{
if (b / 10 != 0)
{
_putchar(b / 10 != 0);
}
_putchar(b % 10 != 0);
}
_putchar('\n');
}
}
