#include "main.h"

/**
* _strlen - Calculates the length of a string
*
* @s: The string whose length is to be determined
*
* Return: The number of characters in the string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
