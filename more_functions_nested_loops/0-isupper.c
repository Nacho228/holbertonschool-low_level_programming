#include "main.h"
/**
 * _isupper - test for an uppercase letter.
 *@c: input number.
 * Return: 1 if @c is upper, 0 if else.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
