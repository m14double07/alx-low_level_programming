#include "main.h"

/**
*_strcpy - Entry point to code
*@dest: Destination
*@src: Source
*Return: String
*/

char *_strcpy(char *dest, char *src)

{
	int len = 0;

	while (*(src + len) != '\0')
	{
	*(dest + len) = *(src + len);
	len++;
	}

	return (dest);
}
