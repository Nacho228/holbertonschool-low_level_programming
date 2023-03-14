#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars.
 * @size: size of the array.
 * @c: char.
 * Return: array.
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i = 0;
	char *array = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (; i < size ; i++)
	{
		array[i] = c;
	}
	return (array);
}
