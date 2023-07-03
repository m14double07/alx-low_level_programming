#include "main.h"
#include <stddef.h>

/**
*_strchr - Entry to programm
*@s: String to be printed
*@c: Character
*Return: Null
*/
char *_strchr(char *s, char c)

{

	while (*s != '\0')
	{
	if (*s == c)
	return (s);
	s++;
	}
	return (NULL);
}
