#include "main.h"
/**
 * rev_string - a function that print a string in reverse.
 * @s: the char pointer.
 */
void rev_string(char *s)
{
	int i = 0, counter = 0;
	char walter_white;

	while (s[i])
	{
		i++;
	}	
	for (; counter < i / 2; counter++)
	{
		walter_white = s[counter];
		s[counter] = s[i - counter - 1];
		s[i - counter - 1] = walter_white;
	}
}
