#include "main.h"

/**
*puts_half - Entry into program
*@str: String to be printed
*/

void puts_half(char *str)

{
	int len = 0;

	while (*str != '\0')
	{
	len++;
	str++;
	}

	str -= (len / 2);

	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');

}
