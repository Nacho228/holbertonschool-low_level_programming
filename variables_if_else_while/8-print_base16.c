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
for (ch = '0' ; ch <= '9' ; ch++)
{
putchar(ch);
}
char ch2;
for (ch2 = 'a' ; ch2 <= 'f' ; ch++)
{
putchar(ch2);
}
putchar ('\n');
return (0);
}
