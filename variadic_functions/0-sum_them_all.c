#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all its parameters.
 * @n: the number of parameters.
 * Return: the summ of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
    unsigned int count = 0;
    unsigned int i;
    va_list args;
    va_start(args, n);

    if (n == 0)
        return (0);

    for (i = 0; i < n; i++)
        count += va_arg(args, int);
    va_end(args);
    return (count);
}