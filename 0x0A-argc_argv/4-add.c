#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
*check_num - check - string there are digit
*@str: array chars
*Return: Always 0
*/

int check_num(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))
	{
	if (!isdigit(str[c]))
		{
		return (0);
		}
		c++;
		}
		return (1);
	}


/**
*main - Print the name of the program
*@argc: Count arguments
*@argv: Arguments
*Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;
	int str_to_int;
	int sum = 0;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
		str_to_int = atoi(argv[i]);
		sum += str_to_int;
		}
		else
		{
		printf("Error\n");
		return (1);
		}
		i++;
	}

		printf("%d\n", sum);

		return (0);
}
