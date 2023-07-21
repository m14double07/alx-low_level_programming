#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
*print_name - Prints the name of a Person
*@name: Name of the person
*@f: Pointer to the function
*Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
