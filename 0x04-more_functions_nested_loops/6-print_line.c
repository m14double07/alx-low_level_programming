#include "main.h"

/**
*print_line - Entry into program
*n: number of times to be printed
*j: line to be printed
*/

void print_line(int n)

{
	int j;


	if (n <= 0)
	_putchar('\n');

	else
	{
	for (j = 1; j >= n; j++)
	_putchar('_');}
	_putchar('\n');
}
