#include <stdio.h>
#include <stdlib.h>

/**
* main - starting point of the program
*
* @argc: int, number of arguments passed to the program
*
* @argv: array of strings, command-line arguments passed to the program
*
* Return: 0 if success, 1 otherwise
*/

int main(int argc, char *argv[])
{
	int totalCoins, value, coinValue;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	totalCoins = 0;
	value  = atoi(argv[1]);

	if (value < 0)
	{
		printf("0\n");
		return (0);
	}

	while (value)
	{
		if (value >= 25)
			coinValue = 25;
		else if (value >= 10)
			coinValue = 10;
		else if (value >= 5)
			coinValue = 5;
		else if (value >= 2)
			coinValue = 2;
		else
			coinValue = 1;

		totalCoins += value / coinValue;
		value %= coinValue;
	}

	printf("%d\n", totalCoins);
	return (0);
}
