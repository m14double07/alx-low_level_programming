#include "main.h"

/**
*_memset - Entry to program
*@s: Sring to be printed
*@b: String
*@n: Value of unsigned int
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
