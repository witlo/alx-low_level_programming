#include <stdlib.h>

/**
* str_concat - Merges two strings
*
* @s1: First string
* @s2: Second string
*
* Return: Pointer to merged strings' memory (SUCCESS) OR NULL (FAILURE)
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *merged_str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1) != '\0')
		len1++;

	while (*(s2 + len2) != '\0')
		len2++;

	merged_str = malloc(1 + (len1 * sizeof(*s1)) + (len2 * sizeof(*s2)));
	if (merged_str == NULL)
		return ('\0');

	for (i = 0; i < len1; i++)
		merged_str[i] = *(s1 + i);

	for (j = 0; j < len2; j++, i++)
		merged_str[i] = *(s2 + j);

	return (merged_str);
}
