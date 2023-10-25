#include <stdio.h>

void display_text(char *text);

/**
* main - Displays the program's name.
*
* @argc: Count of command-line arguments.
*
* @argv: Array containing the command-line arguments.
*
* Return: 0, which signifies successful completion.
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	display_text(argv[0]);
	putchar('\n');

	return (0);
}

/**
* display_text - Outputs each character in a string.
*
* @text: Pointer to the string to be displayed.
*
* Return: void
*/

void display_text(char *text)
{
	int index = 0;

	while (text[index] != '\0')
	{
		putchar(text[index]);
		index++;
	}
}
