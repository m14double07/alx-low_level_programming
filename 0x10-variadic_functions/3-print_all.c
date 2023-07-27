#include "variadic_functions.h"
#include <stdio.h>

/**
*print_all - Prints anything
*@format: Arguments
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *p, *str = " ";

	va_list(list);

	va_start(list, format);

	if (format)
	{
	while (format[i])
		{
		switch (format[i])
			{
			case 'c':
			printf("%s%c", str, va_arg(list, int));
			break;
			case 'i':
			printf("%s%d", str, va_arg(list, int));
			break;
			case 'f':
			printf("%s%f", str, va_arg(list, double));
			break;
			case 's':
			p = va_arg(list, char*);
			if (!p)
			p = "(nil)";
			printf("%s%s", str, p);
			break;
			default:
			i++;
			continue;
			}
		str = ", ";
		i++;
		}
	printf("\n");
	}
}
