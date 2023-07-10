#include <stdio.h>

/**
*main - Prints its name
*@argc: Counter of arguments
*@argv: Array of strings
*Return: The name of the program
*/

int main(int argc, char *argv[])
{
	int i = 0;

	if (i < argc)
	printf("%s\n", argv[i]);
	return (0);
}
