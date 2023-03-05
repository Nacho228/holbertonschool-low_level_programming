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

	while (s1[e] == s2[e] && s1[e] != '\0')
	{
		e++;
	}
	if (s1[e] == s2[e])
	{
		return (0);
	}
	else if (s1[e] > s2[e])
	{
		return (15);
	}
	else
	{
		return (-15);
	}
return (0);
}

