#include "main.h"

int string_to_integer(char *str);
int calculate_product(int a, int b);
void display_integer(int num);

/**
* main - Starting point of execution
*
* @argc: Count of arguments in @argv
*
* @argv: Array of string arguments provided to this program
*
* Return: 0, denoting successful execution
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		display_integer(calculate_product(string_to_integer(argv[1]), string_to_integer(argv[2])));
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
* Return: Integer value after conversion (0 if no number is found)
*/

int string_to_integer(char *str)
{
	int sign = 1;
	int result = 0;

	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		else if (*str >= '0' && *str <= '9')
			result = (result * 10) + (*str - '0');
		else if (result)
			break;

		str++;
	}

	return (result * sign);
}

/**
* calculate_product - Multiplies two numbers
*
* @a: An integer value
*
* @b: Another integer value
*
* Return: Product of a and b
*/

int calculate_product(int a, int b)
{
	return (a * b);
}

/**
* display_integer - Outputs an integer value
*
* @num: The integer to be displayed
*
* Return: None
*/

void display_integer(int num)
{
	unsigned int num_abs;

	num_abs = (num < 0) ? -num : num;

	if (num < 0)
		_putchar('-');

	if (num_abs / 10)
		display_integer(num_abs / 10);

	_putchar((num_abs % 10) + '0');
}
