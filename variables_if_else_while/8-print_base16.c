#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
char ch;
char ch2;
for (ch = '0' ; ch <= '9' ; ch++)
{
putchar(ch);
}
for (ch2 = 'a' ; ch2 <= 'f' ; ch2++)
{
putchar(ch2);
}
putchar ('\n');
return (0);
}
