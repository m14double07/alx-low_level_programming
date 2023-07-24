#include "main.h"

/**
*_memcpy - Copies a block of strings
*@dest: Destination string
*@src: Source file
*@n: Nyumber of character to copy
*Return: Void
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;

	for (; r < n; r++)
	{
	dest[r] = src[r];
	n--;
	}
	return (dest);
}

