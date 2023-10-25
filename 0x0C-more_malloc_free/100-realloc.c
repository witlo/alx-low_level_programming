#include <stdlib.h>

/**
* _realloc - changes the size of the memory block pointed to by @ptr
* @ptr: pointer to the memory block previously allocated with malloc
* @old_size: size in bytes of the allocated space for @ptr
* @new_size: size in bytes of the new memory block
* Return: pointer to the newly allocated memory block,
* or NULL if @ptr is NULL, or
* NULL if @new_size is 0 and @ptr is not NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_block;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_block = malloc(new_size);

		if (new_block == NULL)
			return ('\0');

		return (new_block);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return ('\0');
	}

	new_block = malloc(new_size);

	if (!new_block)
		return ('\0');

	for (i = 0; i < old_size; i++)
		*((char *)new_block + i) = *((char *)ptr + i);

	free(ptr);
	return ((void *)new_block);
}
