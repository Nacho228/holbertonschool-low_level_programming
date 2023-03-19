#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: argument.
 * Return: str
 */
void *malloc_checked(unsigned int b)
{
	char *str = malloc(sizeof(char) * (b + 1));

	if (str == NULL)
	{
		exit(98);
	}
	return (str);
free(str);
}
