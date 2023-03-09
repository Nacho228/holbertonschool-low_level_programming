#include "main.h"
int nano_parodi(int n, int aux);
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: that number.
 * Return: square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
return (nano_parodi(n, 1));
}

/**
 * nano_parodi - function that calculates the natural square root of a number.
 * @n: that number.
 * @aux: auxiliar variable.
 * Return: square root of n.
 */
int nano_parodi(int n, int aux)
{
	if (aux * aux == n)
	{
		return (aux);
	}
	else if (aux > n)
	{
		return (-1);
	}
	else
	{
		return (nano_parodi(n, aux + 1));
	}
}
