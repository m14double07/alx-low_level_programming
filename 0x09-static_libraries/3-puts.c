#include "main.h"

/**
*_puts - Prints a string with a new line
*@s: String to print
*Return: Strng
*/

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
	_putchar(s[i]);
	i++;
	}
	_putchar('\n');
}

