#include "main.h"

/**
* _strstr - Finds the first occurrence of the substring @needle
*           in the string @haystack
*
* @needle: Substring to be searched for
*
* @haystack: String in which to search for @needle
*
* Return: A pointer to the beginning of the located substring,
*         or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (begin);
		
		haystack = begin + 1;
	}
	return (0);
}
