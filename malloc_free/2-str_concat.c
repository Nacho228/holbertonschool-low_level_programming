#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Writes a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: string.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *string = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (string == NULL)
	{
		return (NULL);
	}

	strcpy(string, s1);
	strcat(string, s2);

	return (string);
}
