#include "main.h"

/**
* _strpbrk - Locates the first occurrence in the string @s
*            of any of the bytes in the string @accept
*
* @s: The main string to be scanned
*
* @accept: The string containing the characters to match
*
* Return: A pointer to the byte in @s that matches one of the
*         bytes in @accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
				return (s + i);
		}
	}
	return (0);
}
