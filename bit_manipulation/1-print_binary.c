#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: what we want to print in binary.
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int i;

	while (mask && !(n & mask))
	{
		mask >>= 1;
	}
	if (!mask)
	{
		_putchar('0');
		return;
	}
	for (i = 0; mask; i++)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	mask >>= 1;
	}
}
