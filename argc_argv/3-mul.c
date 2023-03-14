#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - the main function
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{

	int a, b, mul;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
}
return (0);
}

