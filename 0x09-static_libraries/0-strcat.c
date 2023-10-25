#include "main.h"

/**
* _strcat - merges two strings
*
* @dest: the string that will be appended to
*
* @src: the string that will be attached to dest
*
* Return: Pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		*(dest + i) = src[j];
		j++;
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}
