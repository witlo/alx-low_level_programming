#include "main.h"

/**
 * _memcpy - replicate a memory block
 * @dest: destination array where content is to be copied
 * @src: source array from where content is to be copied
 * @n: number of bytes to be copied from source
 * Return: pointer to the destination array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
