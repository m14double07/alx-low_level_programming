#include "main.h"

/**
*string_toupper - Print string in uppercase
*@n: Character to convert
*Return: n
*/

char *string_toupper(char *n)

{
	int i = 0;

	while (n[i] != '\0')
	{
	if (n[i] >= 'a' && n[i] <= 'z')
	n[i] = n[i] - 32;

	n++;
	}
	return (n);

}
