#include "main.h"
#include <stdlib.h>

/**
*create_array - Creates a char arry
*@size: Size of array
*@c: Char
*Return: Pointer to array or Null if fail
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	p[i] = c;
	return (p);

}
