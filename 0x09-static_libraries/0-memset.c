#include "main.h"

/**
* _memset - populates the first @n bytes of the memory block
* pointed to by @s with the constant byte @b.
*
* @s: Pointer pointing to a block of memory.
*
* @b: The byte value used to populate the memory block @s.
*
* @n: The number of bytes in the memory block @s to be populated with @b.
*
* Return: A pointer to the memory block @s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
