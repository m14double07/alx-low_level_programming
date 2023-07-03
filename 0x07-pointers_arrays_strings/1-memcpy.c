#include "main.h"

/**
*_memcpy - Copy strings
*@dest: Destination of coppied string
*@src: Sorce of string to be copied
*@n: Value of character to be copied
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)

	dest[i] = src[i];

	return (dest);

}
