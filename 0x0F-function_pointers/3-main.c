#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Starting point of program
*
* @argc: number of arguments from command line
*
* @argv: array of pointers to arguments
*
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int (*operator_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	operator_func = get_op_func(argv[2]);

	if (operator_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operator_func(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
