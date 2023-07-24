#include "main.h"

/**
*_strcpy - Copy string from one location to another
*@dest: Destination string
*@src: String to move
*Return: String
*/

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
	l++;
	}
	for (; x < l ; x++)
	{
	dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

