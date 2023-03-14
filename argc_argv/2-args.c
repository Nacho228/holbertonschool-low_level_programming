#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - the main function.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	printf("argc = %d\n", argc);
	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
