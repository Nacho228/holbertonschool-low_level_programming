#include "main.h"
#include <stdio.h>
/**
 * print_alphabet -  function that prints the alphabet, in lowercase
 * Return: Always 0.
 *
 */
void print_alphabet(void)
{
  char x;
  for (x = 'a' ; x <= 'z' ; x++)
    {
      putchar (x);
    }
}
int main(void)
{
  putchar ('\n');
}
