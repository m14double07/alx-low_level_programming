#include "main.h"

void _puts_recursion(char *s)

{
	int i = 0;

	if (s[i] != '\0')
	{
	return ('\n');
	}
	else
	_puts(s[i]);
	i++;

	_puts_recursion(s);
}
