#include "main.h"

/**
*_islower - This programm checks if a charactere is lowercase
*@c: character to be worked on
*Return: 1 for lowercase and 0 for anything
*/


int _islower(int c)


{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);

}
