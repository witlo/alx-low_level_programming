#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int measure_str(char *str);
char *init_array(int size);
char *skip_zeroes(char *str);
void calc_product(char *prod, char *mult, int digit, int zeroes);
void sum_nums(char *total_prod, char *new_prod, int new_len);

/**
 * measure_str - Calculate length of a string.
 * @str: String to be measured.
 *
 * Return: Length of the string.
 */
int measure_str(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * init_array - Generate an array of chars initialized with
 *              'x' and ended with null byte.
 * @size: Size of the array to be initialized.
 *
 * Description: Exits with status 98 if space is insufficient.
 * Return: Pointer to the array.
 */
char *init_array(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		array[i] = 'x';

	array[i] = '\0';

	return (array);
}

/**
 * skip_zeroes - Skip leading zeroes in a string of numbers.
 * @str: String to be iterated through.
 *
 * Return: Pointer to the next non-zero element.
 */
char *skip_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * convert_digit - Change a digit character to its integer value.
 * @c: Character to be converted.
 *
 * Description: Exits with status 98 if c is not a digit.
 * Return: The integer value of c.
 */
int convert_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * calc_product - Multiply a string of numbers by a single digit.
 * @prod: Buffer to store the result.
 * @mult: String of numbers to be multiplied.
 * @digit: Single digit multiplier.
 * @zeroes: Required number of leading zeroes.
 *
 * Description: Exits with status 98 if mult contains a non-digit.
 */
void calc_product(char *prod, char *mult, int digit, int zeroes)
{
	int len_mult, num, tens = 0;

	len_mult = measure_str(mult) - 1;
	mult += len_mult;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; len_mult >= 0; len_mult--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * sum_nums - Add numbers in two strings.
 * @total_prod: Buffer containing the running total product.
 * @new_prod: New product to be added.
 * @new_len: Length of new_prod.
 */
void sum_nums(char *total_prod, char *new_prod, int new_len)
{
	int num, tens = 0;

	while (*(total_prod + 1))
		total_prod++;

	while (*(new_prod + 1))
		new_prod++;

	for (; *total_prod != 'x'; total_prod--)
	{
		num = (*total_prod - '0') + (*new_prod - '0');
		num += tens;
		*total_prod = (num % 10) + '0';
		tens = num / 10;

		new_prod--;
		new_len--;
	}

	for (; new_len >= 0 && *new_prod != 'x'; new_len--)
	{
		num = (*new_prod - '0');
		num += tens;
		*total_prod = (num % 10) + '0';
		tens = num / 10;

		total_prod--;
		new_prod--;
	}

	if (tens)
		*total_prod = (tens % 10) + '0';
}

/**
 * main - Multiply two positive numbers.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Description: Exits with status 98 if argument count is incorrect
 *              or if a number contains non-digits.
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	char *total_prod, *new_prod;
	int size, i, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = skip_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = skip_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = measure_str(argv[1]) + measure_str(argv[2]);
	total_prod = init_array(size + 1);
	new_prod = init_array(size + 1);

	for (i = measure_str(argv[2]) - 1; i >= 0; i--)
	{
		digit = convert_digit(*(argv[2] + i));
		calc_product(new_prod, argv[1], digit, zeroes++);
		sum_nums(total_prod, new_prod, size - 1);
	}
	for (i = 0; total_prod[i]; i++)
	{
		if (total_prod[i] != 'x')
			putchar(total_prod[i]);
	}
	putchar('\n');

	free(new_prod);
	free(total_prod);

	return (0);
}
