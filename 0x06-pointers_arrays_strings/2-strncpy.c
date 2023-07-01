#include "main.h"

/**
*_strncpy - Copies string from source to destination
*@src: Sorce of string
*@dest: Destination
*@n: Character to work on
*Return: Dest
*/

char *_strncpy(char *dest, char *src, int n)

{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
	dest[j] = src[j];
	j++;
	}
	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}
	return (dest);

}
