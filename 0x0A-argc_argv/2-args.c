#include "main.h"

void display_string_chars(char *string);

/**
* main - Outputs all received arguments
*
* @argc: Count of arguments, integer
*
* @argv: Array of string arguments passed to the program
*
* Return: 0, indicates successful execution
*/

int main(int argc, char *argv[])
{
    int index;

    for (index = 0; index < argc; index++)
    {
        display_string_chars(argv[index]);
        _putchar('\n');
    }

    return (0);
}

/**
* display_string_chars - Outputs each character in a string
*
* @string: Pointer to the string to be displayed
*
* Return: void
*/

void display_string_chars(char *string)
{
    int index = 0;

    while (string[index] != '\0')
    {
        _putchar(string[index]);
        index++;
    }
}
