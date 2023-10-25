#include <stdlib.h>

/**
* _calloc - allocates and zeroes out memory for an array using malloc
* @nmemb: element count in the array
* @size: size of each array element
* Return: pointer to allocated memory (SUCCESS),
* or NULL if @nmemb or @size is 0 (FAILURE),
* or NULL if insufficient memory (FAILURE)
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return ('\0');

	p = malloc(nmemb * size);

	if (p == NULL)
		return ('\0');

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return ((void *)p);
}
