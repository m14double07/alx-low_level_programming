#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int found;

	while (*s != '\0')
	{
	found = 0;
	while (*accept != '\0')
	{
	if (*s == *accept)
	{
	found++;
	break;
	}
	accept++;
	}
	if (!found)
	{
	break;
	}
	len++;
	s++;
	}

	return (len);
}
