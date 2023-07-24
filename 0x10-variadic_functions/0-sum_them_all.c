#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - Sums to passed args
*@n: Arguments
*Return: The sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list list;


	if (n == 0)
	{
	return (0);
	}
	else

	va_start(list, n);

	for (i = 0; i < n; i++)
	sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
