#include <stdio.h>

/**
 * main - The starting point of the program.
 * @argc: int
 * @argv: str
 * Return: Always 0 (success).
 */

int main(int argc, char *argv[])
{
	(void)argc; // Unused variable
	printf("%s\n", argv[0]); // Print the program name
	return (0); // Return success
}
