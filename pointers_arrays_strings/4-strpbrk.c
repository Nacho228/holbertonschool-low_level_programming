#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: other string.
 * Return: NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = s;

	while (*p)
	{
		char *a = accept;

		while (*a)
		{
			if (*a++ == *p)
			{
				return (p);
			}
		}
	p++;
	}
return ('\0');
}

