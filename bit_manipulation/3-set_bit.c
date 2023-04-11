#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: value of a bit.
 * @index: index;
 * Return: 1;
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= mask;
return (1);
}
