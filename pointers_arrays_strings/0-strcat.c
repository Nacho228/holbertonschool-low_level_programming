#include "main.h"

/**
 * *_strcat - Appends a string to another.
 * @dest: First string.
 * @src: Second string.
 * Return: 0.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		dest_len++;
		i++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';
	return (dest);
}

