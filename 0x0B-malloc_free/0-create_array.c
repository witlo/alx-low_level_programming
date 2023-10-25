#include <stdlib.h>

/**
* create_array - Generates an array and populates it with a specified
* char @c
*
* @size: The desired size of the char array to be generated
*
* @c: The char value used to populate the array
*
* Return: A pointer to the newly created array OR NULL if @size equals 0 OR
* if the array couldn't be created
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return ('\0');

	arr = malloc(size);

	if (arr == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		arr[i] = c;

	arr[size] = '\0';

	return (arr);
}
