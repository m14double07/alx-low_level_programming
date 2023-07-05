#include "main.h"

/**
*_strlen_recursion - Prints the lent of a string
*@s: String to check lenght
*Return: Size of string j
*/
int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s)
	{
	j++;
	j += _strlen_recursion(s + 1);
	}
	return (j);
}
