#include <stdio.h>
#include "function_pointers.h"

/**
*array_iterator - Prints each array element
*@action: Pointer to the function
*@size: Elements
*@array: Array
*Return: Void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
