#include <stdio.h>

/**
 * main - main block
 * Description: Print all possible combinations of single-digit numbers.
 * Numbers must be separated by commas and a space.
 * You can only use `putchar` to print to the console.
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */

int main(void)
{
int n = 0;

for (n = 0 ; n < 10 ; n++)
{
putchar(n + '0');
if (n < 9)
{
putchar(',');
putchar(' ');
}

}
putchar('\n');

return (0);
}
