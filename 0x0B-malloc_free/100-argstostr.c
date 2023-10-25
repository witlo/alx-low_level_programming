#include <stdlib.h>

/**
* argstostr - Merges all program arguments into one string
*
* @ac: Number of arguments
* @av: Array of argument strings
*
* Return: Pointer to merged string (SUCCESS) or
* NULL if @ac is 0 or @av is NULL (FAILURE), or
* NULL if out of memory (FAILURE)
*/

char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0;
	int total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return ('\0');

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_len++;

		total_len++;
	}

	str = malloc(sizeof(char) * total_len + 1);

	if (str == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[len++] = av[i][j];
		}
		str[len++] = '\n';
	}

	str[total_len] = '\0';
	return (str);
}
