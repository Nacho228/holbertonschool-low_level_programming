#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function that returns a pointer to an allocated space in memory.
 * @str: string to be copied
 * Return: str2.
 */
char *_strdup(char *str)
{
	int s, i = 0;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	str2 = (char *) malloc((i + 1) * sizeof(char));

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (s = 0; s < i; s++)
	{
		str2[s] = str[s];
	}

	str2[s] = '\0';

	return (str2);

	free(str2);
}

