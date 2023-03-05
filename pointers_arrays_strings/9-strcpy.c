#include "main.h"
/**
 * _strcpy - function that copies the string pointed to.
 * @src: source pointer.
 * @dest: destination pointer/
 * Return: dest_st.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_st = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

return (dest_st);
}

