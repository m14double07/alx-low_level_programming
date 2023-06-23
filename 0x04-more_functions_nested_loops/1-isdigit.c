#include "main.h"

/**
*_isdigit - This program will check for digits
*@c: The charcter to be checked
*Return: 1 if c is a digit
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}

	else
	{
	return (0);
	}
}
