#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: number of bytes.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *e = dest;
	char *s = src;
	unsigned int A = 0;

	for (; n > A; n++)
	{
		e[A] = s[A];
	}
return (dest);
}

