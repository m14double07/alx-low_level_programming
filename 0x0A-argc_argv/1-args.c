#include <stdio.h>

int main(int argc, char *argv[])

{
	int i = 0;


	if (argv[i])
	{
	while (i < argc)
	printf("%d\n", i);
	i++;
	}
	return (0);
}
