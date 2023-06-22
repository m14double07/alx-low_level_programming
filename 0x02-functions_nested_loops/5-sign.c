#include "main.h"

/**
*print_sign - Print sign of a number
*Return: 1 for positive, -1 for negative, 0 for zero
*@n: Character to be checked
*/


int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}

}
