#include "main.h"

/**
*_isalpha - Checks for alphabets
*@c: Char to check
*Return: Result
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

