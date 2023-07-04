#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int found = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == accept[found])
		{	
			len++;
			break;
		}
			else if (accept[found + 1] == '\0')
			return (len);
		}
	}
	s++;
	return (len);
}
