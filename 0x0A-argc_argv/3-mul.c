#include <stdio.h>
#include <stdlib.h>

/**
*main - Multiplies two integers
*@argc: Conts the integers
*@argv: Integers to print
*Return: Multiple
*/

int main(int argc, char *argv[])
{
	int i = 0, a = 0, b = 0, c = 0;

	while (i < argc)
	{
	if (i == 0)
	{
	printf("Error\n");
	}

	else
	a =+ atoi(argv[i]);
	b =+ atoi(argv[i + 1]);
	c = a * b;

	printf("%d\n", c);
	}
	i++;

	return (0);
}
