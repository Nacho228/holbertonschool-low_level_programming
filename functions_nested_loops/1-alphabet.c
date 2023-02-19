#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)

{
char lowercase;
lowercase = 'a';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
}
int main(void)
{
print_alphabet();
putchar('\n');
}
