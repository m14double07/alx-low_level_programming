#include "main.h"

/**
*_print_rev_recursion - Print string in reverse
*@s: String to print
*Return: String
*/
void _print_rev_recursion(char *s)

{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}

}
