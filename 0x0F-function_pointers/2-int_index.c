#include "function_pointers.h"
#include <stdlib.h>

/**
*int_index - Searches for an integer
*@array: The array
*@size: Number of elements
*@cmp: Pointer to the function
*Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}
	return (-1);
}
