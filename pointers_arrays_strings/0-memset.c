#include "main.h"
/**
 * _memset - Fills memory with a constant byte.
 * @n: number of bytes.
 * @s: pointer.
 * @b: constant byte.
 * Return: always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *a = s;
	unsigned int m = 0;

	for (; m < n; m++)
	{
		*a++ = b;
	}
	return (s);
}

