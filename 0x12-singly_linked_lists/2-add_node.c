#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* _strlen - Returns the length of a string.
* @s : The string
* Return: value is i
*/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}

/**
* add_node - add a new node at
* @head: head of a list_t
* @str: element
* Return: the number of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *a;

	a = malloc(sizeof(list_t));
	if (a == NULL)
	return (NULL);
	a->str = strdup(str);

	a->len = _strlen(str);
	a->next = *head;
	*head = a;

	return (a);
}

