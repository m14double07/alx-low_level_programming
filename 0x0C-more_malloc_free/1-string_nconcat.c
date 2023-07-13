#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, l = 0, k = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";

	while (s1[i])
		i++;

	if (s2 == NULL)
		s2 = "";

	while (s2[j])
		j++;

	if (n >= j)
		l = i + j;
	else
		l = i + n;

	p = malloc(sizeof(char) * l + 1);

	if (p == NULL)
	return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= i)
		p[k] = s1[k];

	if (k >= i)
	{
	p[k] = s2[k];
	}
	j++;
	}
	p[k] = '\0';
	return (p);
}
