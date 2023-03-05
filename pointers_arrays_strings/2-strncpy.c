#include "main.h"
/**
 * _strncpy - Function that copies a string.
 * @dest: String A.
 * @src: String B.
 * @n: Integer n.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int L;

	for (L = 0 ; n > L && src[L] != '\0' ; L++)

	{
		dest[L] = src[L];
	}
	for (; n > L ; L++)
	{
		dest[L] = '\0';
	}
return (dest);
}

