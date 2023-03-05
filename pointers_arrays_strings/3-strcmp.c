#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compare two strings.
 * @s1: String to be compared.
 * @s2: String that s1 is going be compared to.
 * Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
	int e = 0;

	for (e = 0; s1[e] != '\0' || s2[e] != '\0'; e++)
	{
		if (s1[e] != s2[e])
		{
			return (s1[e] - s2[e]);
		}
	}
return (0);
}

