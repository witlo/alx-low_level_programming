#include "function_pointers.h"

/**
 * int_index - Locates an integer in an array.
 *
 * @array: Array of integers to be searched.
 *
 * @size: Total elements in @array.
 *
 * @cmp: Function pointer to compare values.
 *
 * Return: Index of the first integer in @array meeting
 * the condition set by @cmp. Returns -1 if size <= 0, no integer
 * meeting condition is found in @array, or if @array or @cmp is NULL.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
