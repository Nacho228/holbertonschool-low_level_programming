#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string.
 * @accept: where bytes comes from.
 * Return: count.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int accept_table[256] = {0};
	int i = 0;

	for (; accept_table[i]; i++)
	{
		accept_table[(unsigned char)accept[i]] = 1;
	}
	for (; s[i]; i++)
	{
		if (accept_table[(unsigned char)s[i]] == 0)
		{
			return (count);
		}
		count++;
	}
	return (count);
}

