#include "main.h"


/**
*print_last_digit - Entry to program
*@n: number to be checked
*Return: Last didit of the number
*/

int print_last_digit(int n)

{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
	digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
