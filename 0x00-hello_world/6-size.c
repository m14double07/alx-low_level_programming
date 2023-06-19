#include <stdio.h>

/**
*main - Entry into the programm
*
*Return: 0 at success
*/

int main(void)

{

	int  ch[5] = {1, 4, 8, 8, 4};

	printf("Size of a char: %d byte(s)\n", ch[0]);

	printf("Size of an int: %d byte(s)\n", ch[1]);

	printf("Size of a long int: %d byte(s)\n", ch[2]);

	printf("Size of a long long int: %d byte(s)\n", ch[3]);

	printf("Size of a float: %d byte(s)\n", ch[4]);

	return (0);
}
