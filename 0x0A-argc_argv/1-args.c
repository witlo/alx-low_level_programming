#include "main.h"

void display_integer(int n);

/**
* main - Outputs the count of command-line arguments passed.
*
* @argc: Size of @argv
*
* @argv: Array of string pointers containing the program's arguments.
*
* Return: 0, indicating successful execution.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	display_integer(--argc);
	_putchar('\n');
	return (0);
}

/**
* display_integer - Prints an integer using _putchar.
*
* @n: Integer to be printed.
*
* Return: void
*/

void display_integer(int n)
{
	if (n / 10)
		display_integer(n / 10);

	_putchar(n % 10 + '0');
}
