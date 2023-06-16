#include <stdio.h>

/**
*main - Entry point of the program
*Return: 0 at success
*/


int main(void)

{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}

	putchar('\n');

	return (0);
}
