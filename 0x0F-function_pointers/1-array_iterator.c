#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - Executes specified function on each item in an array
*
* @array: Array of integers to iterate through
*
* @size: Number of elements in @array
*
* @action: Function pointer to apply to each element of @array
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
