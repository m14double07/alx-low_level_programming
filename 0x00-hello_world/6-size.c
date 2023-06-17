#include <stdio.h>

/**
*main - Entry into the programm
*
*Return: 0 at success
*/

int main(void)

{

	int  ch[5] = {1, 4, 4, 8, 4};

	printf("Size of char: %d byte(s)\n", ch[0]);

	printf("Size of int: %d byte(s)\n", ch[1]);

	printf("Size of long int: %d byte(s)\n", ch[2]);

	printf("Size of long long int: %d byte(s)\n", ch[3]);

	printf("Size of float: %d byte(s)\n", ch[4]);

	return (0);
}
