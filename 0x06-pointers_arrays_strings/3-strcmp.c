#include "main.h"

/**
*_strcmp - Compares two strings
*@s1: First string
*@s2: Second srting
*Return: difference btween both string
*/

int _strcmp(char *s1, char *s2)

{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0') 
	{
	if (s1[i] != s2[2])
	{
	return (s1[i] - s2[i]);
	i++;
	}
	}
	return (0);
}