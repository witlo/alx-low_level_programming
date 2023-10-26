#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - calculate product of two numeric arguments
* @argc: count of command-line arguments
* @argv: command-line arguments
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{

	unsigned long product;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	product = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", product);
	return (0);
}
