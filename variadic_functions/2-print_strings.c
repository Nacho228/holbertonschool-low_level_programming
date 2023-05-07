#include "variadic_functions.h"
/**
 * print_strings - function that prints strings.
 * @separator: string to be printed between strings.
 * @n: number of strings.
 * Return: void.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
char *str = NULL;
unsigned int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str != NULL)
printf("%s", str);
else
printf("(nil)");
if (separator != NULL)
{
if (i != n - 1)
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
