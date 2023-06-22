#include "main.h"

/**
*_isalpha - checks for upper or lower cases
*Return: 1 for alphabetic character or 0 for anything else
*@c: the character to be checked
*/


int _isalpha(int c)

{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))

	{
	return (1);
	}
	return (0);
}
