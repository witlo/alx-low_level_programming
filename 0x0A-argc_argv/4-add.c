#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - sums numeric arguments
* @argc: count of arguments supplied to the program
* @argv: array of pointers to the arguments
*
* Return: 0 if successful, 1 if error
*/

int main(int argc, char *argv[])
{
	int sum = 0, index1, index2;

	for (index1 = 1; index1 < argc; index1++)
	{
		for (index2 = 0; argv[index1][index2]; index2++)
		{
			if (isdigit(argv[index1][index2]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (index1 = 1; index1 < argc; index1++)
	{
		sum += atoi(argv[index1]);
	}
	printf("%d\n", sum);
	return (0);
}
