#include <stdio.h>

/**
*main - Prints the counts of argc
*@argc: Counter of arguments
*@argv: Array of strings
*Return: 0
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
