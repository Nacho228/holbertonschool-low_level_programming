#include "main.h"
#include <string.h>
/**
 * puts_half - print the second half of a string.
 * @str: the string to be printed.
 * Return: void.
 */

void puts_half(char *str)
{
int length = 0;
int jesse_pinkman;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
	jesse_pinkman = length / 2;
	}
	else
	{
		jesse_pinkman = (length + 1) / 2;
	}
	for (; jesse_pinkman < length; jesse_pinkman++)
	{
		_putchar(str[jesse_pinkman]);
	}
_putchar('\n');
}
