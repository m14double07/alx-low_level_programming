#include "main.h"

/**
*_puts_recursion - Print a recursive string
*@s: String to print
*Return: String
*/
void _puts_recursion(char *s)

{
	if (*s)

	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
