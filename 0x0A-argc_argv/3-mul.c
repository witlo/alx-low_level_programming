#include "main.h"

int string_to_integer(char *str);
int product_of_two_numbers(int number1, int number2);
void display_number(int number);

/**
* main - Starting point of the program
*
* @argc: Count of command line arguments
*
* @argv: Array containing the command line arguments
*
* Return: 0, indicating successful execution
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		display_number(product_of_two_numbers(string_to_integer(argv[1]), string_to_integer(argv[2])));
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
* string_to_integer - Transforms a string to an integer
*
* @str: String to be transformed
*
* Return: The integer equivalent of the string
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
* product_of_two_numbers - Calculates the product of two integers
*
* @number1: First integer
*
* @number2: Second integer
*
* Return: Product of number1 and number2
*/

int product_of_two_numbers(int number1, int number2)
{
	return (number1 * number2);
}

/**
* display_number - Displays an integer to the standard output
*
* @number: Integer to be displayed
*
* Return: None
*/

void display_number(int number)
{
	unsigned int absolute_number;

	absolute_number = (number < 0) ? -number : number;

	if (number < 0)
		_putchar('-');

	if (absolute_number / 10)
		display_number(absolute_number / 10);

	_putchar((absolute_number % 10) + '0');
}
