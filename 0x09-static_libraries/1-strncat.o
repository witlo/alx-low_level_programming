#include "main.h"

/**
* _strncat - Merges two strings using up to @n bytes from the source string
*
* @dest: Target string to which the source string will be appended
*
* @src: Source string that will be appended to the target string
*
* @n: Maximum number of bytes from the source string to append to the target string
*
* Return: Pointer to the target string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
