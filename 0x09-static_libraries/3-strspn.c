#include "main.h"
#include <stdio.h>

/**
* _strspn - Calculates the length of the initial segment of @s
*           which consists entirely of characters in @accept
*
* @s: The main string to be scanned
*
* @accept: The string containing the characters to match
*
* Return: The number of characters in the initial segment of @s
*         which consist only of characters from @accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}

	return (i);
}

