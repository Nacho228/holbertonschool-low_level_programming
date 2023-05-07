#include "variadic_functions.h"
/**
 * print_strings - function that prints strings.
 * @separator: string to be printed between strings.
 * @n: number of strings.
 * Return: void.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str;
unsigned int i;
va_list args;
va_start(args, n);

for(i = 0; i < n; i++)
{
    str = va_arg(args, char *);
    printf("%s", str);
    if (separator != NULL)
{
if (i != n - 1)
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
