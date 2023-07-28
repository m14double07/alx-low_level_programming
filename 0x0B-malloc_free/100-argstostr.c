#include <stdlib.h>
#include "main.h"

/**
**argstostr - concatenates all the args
*@ac: number of args
*@av: array of args
* Return: Pointer to the new string or NULL
*/
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	
	return (p);
}
