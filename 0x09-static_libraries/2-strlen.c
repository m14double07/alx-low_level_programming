#include "main.h"

/**
*_strlen - Prints lenght of a string
*@s: String to print
*Return: Lenght
*/


int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}

