#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - merge two strings
*
* @s1: initial string
* @s2: string to append
* @n: bytes of @s2 to include
*
* Return: pointer to new memory;
* NULL on failure
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int m;
	unsigned int p;
	unsigned int k = 0;
	unsigned int length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;

	length = i + j;

	arr = malloc(sizeof(char) * (length + 1));
	if (arr == NULL)
		return (NULL);

	for (p = 0; p < i; p++)
		arr[k++] = s1[p];
	for (m = 0; m < j; m++)
		arr[k++] = s2[m];

	arr[k] = '\0';
	return (arr);
}
