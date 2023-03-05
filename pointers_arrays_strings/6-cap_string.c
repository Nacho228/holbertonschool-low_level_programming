#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: the string mentioned.
 * Return: always 0.
 */

char *cap_string(char *s)
{
	int n;
	int J = 1;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == ' ' || s[n] == '\t' || s[n] == '\n')
		{
			J = 1;
		}
		else
		{
			if (J)
			{
				if (s[n] >= 'a' && s[n] <= 'z')
				{
					s[n] -= 'a' - 'A';
				}
					J = 0;
				}
			}
	}
	return (s);
}

