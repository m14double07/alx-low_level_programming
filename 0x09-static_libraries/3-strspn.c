#include "main.h"

/**
*_strspn - Print len of prefix string
*@s: String to print
*@accept: Condition
*Return: Result
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
	{
	n++;
	break;
	}
	else if (accept[i + 1] == '\0')
	return (n);
	}
	s++;
	}
	return (n);
}

