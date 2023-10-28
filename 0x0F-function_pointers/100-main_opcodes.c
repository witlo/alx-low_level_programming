#include <stdio.h>
#include <stdlib.h>

/**
* main - Displays the opcodes of its own main function
*
* @argc: Count of command-line arguments
*
* @argv: Array of command-line arguments
*
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int byte_count, index;
	int (*function_ptr)(int, char **) = &main;

	if (argc == 2)
	{
		byte_count = atoi(argv[1]);
		if (byte_count < 0)
		{
			printf("Error\n");
			exit(2);
		}
		for (index = 0; index < byte_count; index++)
			printf("%02x%c",
					(unsigned char)*((char *)function_ptr + index), index < byte_count - 1 ? ' ' : '\n');
	}
	else
	{
		printf("Error\n");
		exit(1);
	}

	return (0);
}
