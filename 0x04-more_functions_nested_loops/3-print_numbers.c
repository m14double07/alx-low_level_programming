#include "main.h"
#include <unistd.h>

/**
*print_numbers - Print 1 to 9
*c: This is the char
*Return: void at success
*/


void print_numbers(void)

{
	char c;

	for (c = '0'; c <= '9'; c++)

	_putchar(c);
	_putchar('\n');

}
