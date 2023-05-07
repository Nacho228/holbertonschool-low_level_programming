#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers.
 * Return: void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int count = 0;
unsigned int i;
va_list args;
va_start(args, n);


for (i = 0; i < n; i++)
{
count = va_arg(args, int);
printf("%i", count);
if (separator == NULL)
{
printf(" ");
}
if (i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
