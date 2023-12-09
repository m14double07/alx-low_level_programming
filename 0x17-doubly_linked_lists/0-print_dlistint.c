#include "lists.h"

/**
 * print_dlistint - Prints the element in the list
 * @h: Head node of the list
 * Return: The number of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (c);

	while (h->prev != NULL)
		h = h->prev;

	while (h->prev != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}
