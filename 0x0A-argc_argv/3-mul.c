#include "main.h"

int string_to_int(char *str);
int multiply_values(int val1, int val2);
void output_number(int num);

/**
* main - Starting point of the application
*
* @argc: Number of items in @argv
*
* @argv: An array of string arguments passed to the program
*
* Return: 0, if execution is successful
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		output_number(multiply_values(string_to_int(argv[1]), string_to_int(argv[2])));
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
		return (0);
	}
}

/**
* string_to_int - Transforms a string representing a number to its integer value
*
* @str: The input string
*
* Return: Corresponding integer OR (0) if none
*/

int string_to_int(char *str)
{
	int sign_flag = 1;
	int output = 0;

	while (*str != '\0')
	{
		if (*str == '-')
			sign_flag *= -1;
		else if (*str >= '0' && *str <= '9')
			output = (output * 10) + (*str - '0');
		else if (output)
			break;

		str++;
	}

	return (output * sign_flag);
}

/**
* multiply_values - Computes the product of two numbers
*
* @val1: First input value
*
* @val2: Second input value
*
* Return: The product of val1 and val2
*/

int multiply_values(int val1, int val2)
{
	return (val1 * val2);
}

/**
* output_number - Displays a number as characters
*
* @num: Input integer
*
* Return: None
*/

void output_number(int num)
{
	unsigned int temp_num;

	temp_num = num;

	if (num < 0)
	{
		_putchar('-');
		temp_num = -num;
	}

	if (temp_num / 10 != 0)
	{
		output_number(temp_num / 10);
	}

	_putchar((temp_num % 10) + '0');
}
