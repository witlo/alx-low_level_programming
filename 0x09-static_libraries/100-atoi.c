#include "main.h"

/**
* _atoi - converts a string containing numbers to an integer
*
* @s: The string to be converted
*
* Return: the resulting integer OR 0 if there are no numbers in the string
*/

int _atoi(char *s)
{
	int sign_cache = 1;
	int result = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign_cache *= -1;
		else if (*s >= '0' && *s <= '9')
			result = (result * 10) + (*s - '0') * sign_cache;
		else if (result)
			break;

		s++;
	}

	return (result);
}
