#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: number given.
 * Return: 0.
 */
int factorial(int n)
{
	int i, b = 1;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			b *= i;
		}
		return (b);
	}
}

