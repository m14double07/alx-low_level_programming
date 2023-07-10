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
	int i = 0, j = 0;

	if (argc == 3)
	{
	i += atoi(argv[1]);
	j += atoi(argv[2]);
	printf("%d\n", i * j);
	}
	else
	{
	printf("Error\n");
	}
	return (0);
}
