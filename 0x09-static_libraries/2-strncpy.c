#include "main.h"

/**
*_strncpy - Entry to program
*@dest: Destination string
*@n: Char to copy
*@src: Source string
*Return: String
*/


char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
	dest[j] = src[j];
	j++;
	}
	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}
	return (dest);
}

