#include "main.h"

/**
*_puts - Entry into program
*@str: String to be printed
*/
void _puts(char *str)

{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');

}
