#include <stdio.h>

/**
*main - Entry point of the program
*Return: 0 at success
*/


int main(void)

{
	char ch;
	char bn;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);
	}

	for (bn = 'A'; bn <= 'Z'; ch++)
	{
		putchar(bn);
	}

	putchar('\n');

	return (0);
}
