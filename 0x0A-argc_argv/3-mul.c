#include "main.h"

int str_to_int(char *str);
int product_of_two(int num1, int num2);
void display_num(int num);

/**
* main - Initial point
*
* @num_args: Count of arguments in @arg_vals
*
* @arg_vals: String array of arguments from command line
*
* Return: 0 if success, 1 if fail
*/

int main(int num_args, char *arg_vals[])
{
	if (num_args == 3)
	{
		display_num(product_of_two(str_to_int(arg_vals[1]), str_to_int(arg_vals[2])));
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
* str_to_int - Transforms a string to an integer
*
* @str: String to be transformed
*
* Return: Integer obtained or (0) if none
*/

int str_to_int(char *str)
{
	int sign_mult = 1;
	int result = 0;

	while (*str)
	{
		if (*str == '-')
			sign_mult *= -1;
		else if (*str >= '0' && *str <= '9')
			result = result * 10 + (*str - '0');
		else if (result)
			break;
		str++;
	}

	return (result * sign_mult);
}

/**
* product_of_two - Calculates the product of two integers
*
* @num1: First integer
*
* @num2: Second integer
*
* Return: Product of num1 and num2
*/

int product_of_two(int num1, int num2)
{
	return (num1 * num2);
}

/**
* display_num - Outputs an integer as characters
*
* @num: Integer to be printed
*
* Return: void
*/

void display_num(int num)
{
	unsigned int num_abs;

	num_abs = num;

	if (num < 0)
	{
		_putchar('-');
		num_abs = -num;
	}

	if (num_abs / 10 != 0)
		display_num(num_abs / 10);

	_putchar((num_abs % 10) + '0');
}
