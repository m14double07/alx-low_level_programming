#include "main.h"
#include <stddef.h>

/**
*_strlen - Print string length
*@s: The string to be checked
*len: Size of string
*Return: len as the size of the length
*/

int _strlen(char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
	{
	len++;
	}
	return (len);
}
