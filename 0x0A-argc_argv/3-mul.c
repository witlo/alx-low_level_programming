#include "main.h"

int string_to_integer(char *str);
int product_of_two_integers(int int1, int int2);
void display_number(int num);

/**
* main - Initial function
*
* @argc: Count of @argv elements
*
* @argv: Array containing program command line arguments
*
* Return: 0, indicating successful execution
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		display_number(product_of_two_integers(string_to_integer(argv[1]), string_to_integer(argv[2])));
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
}

/**
* string_to_integer - Converts a string to an integer
*
* @str: Input string to be converted
*
* Return: Integer result of conversion
*/

int string_to_integer(char *str)
{
	int sign = 1;
	int total = 0;

	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		else if (*str >= '0' && *str <= '9')
			total = (total * 10) + (*str - '0');
		else if (total)
			break;

		str++;
	}

	return (total * sign);
}

/**
* product_of_two_integers - Calculates the product of two integers
*
* @int1: First integer
*
* @int2: Second integer
*
* Return: Product of int1 and int2
*/

int product_of_two_integers(int int1, int int2)
{
	return (int1 * int2);
}

/**
* display_number - Outputs a number to the standard output
*
* @num: Integer to be displayed
*
* Return: None
*/

void display_number(int num)
{
	unsigned int num_abs;

	num_abs = (num < 0) ? -num : num;

	if (num < 0)
		_putchar('-');

	if (num_abs / 10)
		display_number(num_abs / 10);

	_putchar((num_abs % 10) + '0');
}
