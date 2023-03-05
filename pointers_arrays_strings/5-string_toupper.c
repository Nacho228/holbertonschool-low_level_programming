#include "main.h"
/**
 * string_toupper - Converts all lowercases to uppercases.
 * @str: string to be converted.
 * Return: str.
 */
char *string_toupper(char *str)
{
	int o;

	for (o = 0; str[o] != '\0'; o++)
	{
		if (str[o] >= 'a' && str[o] <= 'z')
		{
		str[o] = str[o] - 32;
		}
	}
	return (str);
}

