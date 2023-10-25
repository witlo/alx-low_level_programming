#include <stdlib.h>

/**
* _strdup - Allocates space in memory to duplicate a given string
*
* @str: The source string to be duplicated
*
* Return: Pointer to memory with @str's duplicate (SUCCESS)
* OR NULL if @str is NULL (FAILURE) OR
* NUL if not enough memory was available
*/

char *_strdup(char *str)
{
	char *duplicated_str;
	unsigned int idx;
	unsigned int str_len = 0;

	if (str == NULL)
		return ('\0');

	while (*(str + str_len) != '\0')
		str_len++;

	str_len++;

	duplicated_str = malloc(sizeof(*str) * str_len);

	if (duplicated_str == NULL)
		return ('\0');

	for (idx = 0; idx < str_len; idx++)
		duplicated_str[idx] = str[idx];

	duplicated_str[idx] = '\0';

	return (duplicated_str);
}
