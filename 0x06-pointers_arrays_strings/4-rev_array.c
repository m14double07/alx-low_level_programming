#include "main.h"

/**
*reverse_array - Reverse an arry
*@a: Arrat to be reversed
*@n: Number of element of arry
*Return: rev
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
	n--;

	j = a[i];
	a[i] = a[n];
	a[n] = j;
	}
}
