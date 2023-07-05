#include "main.h"

/**
*_pow_recursion - Prints power of a num
*@x: Number
*@y: Power
*Return: Power of x to y
*/

int _pow_recursion(int x, int y)

{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	return (x * _pow_recursion(x, y - 1));
}
