#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for nmemb elements.
 * @nmemb: those elements.
 * @size: size.
 * Return: arr.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr = malloc(sizeof(char) * nmemb * size);

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	if (arr != NULL)
	{
		for (i = 0; i < nmemb; i++)
		{
		arr[i] = 0;
		}
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}
