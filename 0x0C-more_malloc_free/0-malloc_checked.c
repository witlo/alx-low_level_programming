#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocate memory with malloc
* @b: number of bytes to allocate
* Return: pointer to allocated memory (SUCCESS)
* 98 if not enough memory available (FAILURE)
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
