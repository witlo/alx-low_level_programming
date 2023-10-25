#include "main.h"

/**
* _strncpy - Replicates a string with a maximum of @n characters
*
* @dest: The target string where the content will be copied to
*
* @src: The source string from which content will be copied
*
* @n: The maximum number of characters from src to be copied to dest
*
* Return: Pointer to the resulting dest string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		*(dest + i) = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
