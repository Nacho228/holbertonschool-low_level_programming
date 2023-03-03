#include "main.h"
#include <string.h>
/**
 * puts_half - print the second half of a string.
 * @str - the string to be printed.
 * Return: void.
 */

void puts_half(char *str)
{
int Brr_anuel = 0;
int jesse_pinkman;
int i;

	while (*str != '\0')
	{	 
		Brr_anuel++;
		str++;
	}
for (jesse_pinkman = Brr_anuel / 2)
	if (Brr_anuel % 2 != '\0')
	{
		jesse_pinkman++;
	}
	for(i = jesse_pinkman ; i <= Brr_anuel ; i++)
    	{
      		_putchar(str[i]);
    	}
  _putchar('\n');
}
