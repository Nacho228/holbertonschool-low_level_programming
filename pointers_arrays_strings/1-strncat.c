#include <stdio.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: First string.
 * @src: Second string.
 * @n: maximum number of bytes used from src.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')

	{
		dest_len++;
	}

	for (i = 0 ; i < n && src[i] != '\0'; i++)

	{
		dest[dest_len + i] = src[i];
	}
		dest[dest_len + n] = '\0';
	return (dest);
}

