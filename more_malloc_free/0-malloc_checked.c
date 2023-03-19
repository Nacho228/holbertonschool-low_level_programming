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
	char *str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
return (str);
}
