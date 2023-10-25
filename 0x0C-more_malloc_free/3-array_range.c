#include <stdlib.h>

/**
* array_range - creates a sequence of integers from @min to @max
* @min: start and minimum value of the sequence
* @max: end and maximum value of the sequence
* Return: pointer to the new sequence (SUCCESS),
* or NULL if @min > @max (FAILURE),
* or NULL if memory allocation fails (FAILURE)
*/

int *array_range(int min, int max)
{
	int i, len;
	int *p;

	if (min > max)
		return ('\0');

	len = (max - min) + 1;
	p = malloc(sizeof(int) * len);

	if (p == NULL)
		return ('\0');

	for (i = 0; i < len; i++)
		p[i] = min + i;

	return (p);
}
