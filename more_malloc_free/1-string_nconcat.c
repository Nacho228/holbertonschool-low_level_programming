#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate n bytes of two given strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: size.
 * Return: str.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *str = (char *) malloc(strlen(s1) + n + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL)
	{
		s1 = "";
	}
	
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (len2 >= n)
	{
		n = len2;
	}

	strcpy(str, s1);
	strncpy(str + len1, s2, n);
	str[len1 + n] = '\0';

	return (str);
}
