#include <stdio.h>

/**
*main - Prints string in new lines
*@argc: Argument counter
*@argv: Array of strings
*Return: Result
*/
int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
