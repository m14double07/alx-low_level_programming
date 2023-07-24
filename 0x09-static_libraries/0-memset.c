#include "main.h"

/**
*_memset - Entry to program
*@s: Destination file
*@b: Source file
i*@n: Unsigned int for char to be coppied
*Return: o
*/


char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}

