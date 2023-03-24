#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name.
 * @name: the name to be printed.
 * @f: function pointer.
 * return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
