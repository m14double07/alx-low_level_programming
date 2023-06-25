#include "main.h"

/**
*more_numbers - Entry into the program
*c: character to be printed
*j: Second character
*Return: Void at success
*/

void more_numbers(void)

{
	int c, j;

	for (c = 48; c <= 57; c++)
	{
	for (j = 48; j < 63; j++)
	}
	{
	if (j >= 58)
	_putchar(c);
	_putchar(j % 10 + '0');
	}

	_putchar('\n');

}
