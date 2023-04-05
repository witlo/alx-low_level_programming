#include "main.h"

/**
 * _memset - it fills a block of memory with a specific value
 * @s: this is the starting address of memory to be filled
 * @b: this is the desired value
 * @n: this is the number of bytes to be changed
 *
 * Return: the changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
	s[x] = b;
	x++;
	}

	return (s);
}
