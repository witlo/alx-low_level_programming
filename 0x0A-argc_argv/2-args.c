#include "main.h"

void display_string_elements(char *txt);

/**
* main - Outputs each argument provided to the program
*
* @argc: Number of items in @argv, integer
*
* @argv: An array of string arguments passed to the program
*
* Return: 0, if executed successfully
*/

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		display_string_elements(argv[index]);
		_putchar('\n');
	}

	return (0);
}

/**
* display_string_elements - Outputs every character of a given string
*
* @txt: Pointer to the input string
*
* Return: None
*/

void display_string_elements(char *txt)
{
	int j = 0;

	while (txt[j] != '\0')
	{
		_putchar(txt[j]);
		j++;
	}
}
