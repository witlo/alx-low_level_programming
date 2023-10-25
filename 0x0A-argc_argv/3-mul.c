#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates product of 2 numbers passed as command line arguments
 * @argc: count of command line arguments
 * @argv: array of command line arguments
 * Return: 1 for incorrect number of arguments, 0 for successful execution
 */

int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
        return (0);
    }
    else /* argc != 3 */
    {
        printf("Error\n");
        return (1);
    }
}
