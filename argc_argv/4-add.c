#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * main - main function
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (; i < argc ; i++)
	{
		if (argc == 1)
	{
		printf("0\n");
	}
	else if (argv[i] == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		{
			sum += atoi(argv[i]);
		}
	}
	}	
	printf("%d\n", sum);
return (0);
}
