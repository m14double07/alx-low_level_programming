#include "main.h"

/**
*_atoi - Converts to integer value
*@s: String in num
*Return: Void
*/


int _atoi(char *s)
{
	int set = 1, i = 0;
	unsigned int r = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
	if (s[i] == '-')
	set *= -1;
	i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
	r = (r * 10) + (s[i] - '0');
	i++;
	}
	r *= set;
	return (r);
}

