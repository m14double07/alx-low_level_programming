#include "main.h"

/**
*_strpbrk - checks for a specific char
*@s: String to examine
*@accept: set of char as samplles
*Return: Ocurrance
*/


char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
	for (k = 0; accept[k]; k++)
	{
	if (*s == accept[k])
	return (s);
	}
	s++;
	}
	return ('\0');
}

