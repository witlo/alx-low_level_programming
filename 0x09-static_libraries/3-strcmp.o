#include "main.h"

/**
* _strcmp - Compares two strings
*
* @s1: The first string for comparison
*
* @s2: The second string for comparison
*
* Return: 0 if strings are identical, 
* 
* less than 0 if s1 < s2, greater than 0 if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			diff = ((s1[i] - '\0') - (s2[i] - '\0'));
			break;
		}
		i++;
	}
	return (diff);
}
