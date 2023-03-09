#include "main.h"
int phillip(int n, int i);
/**
 * is_prime_number - function that recursively checks if an integer is prime.
 * @n: that integer.
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}

	return (phillip(n, 2));
}

/**
 * phillip - helper function that recursively checks if an integer is prime.
 * @n: that integer.
 * @i: current divisor to check.
 * Return: 1 if n is prime, 0 otherwise.
 */
int phillip(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
return (phillip(n, i + 1));
}
