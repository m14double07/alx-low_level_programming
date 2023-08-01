#include "lists.h"

/**
*insert_nodeint_at_index - inserts a new node in a list,
*at a given position
*@head: pointer to the first node in the list
*@idx: index where the new node is added
*@n: data to insert in the new node
*Return: pointer to the new node, or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *j;
	listint_t *temp = *head;

	j = malloc(sizeof(listint_t));
	if (!j || !head)
	return (NULL);

	j->n = n;
	j->next = NULL;

	if (idx == 0)
	{
	j->next = *head;
	*head = j;
	return (j);
	}

	for (i = 0; temp && i < idx; i++)
	{
	if (i == idx - 1)
	{
	j->next = temp->next;
	temp->next = j;
	return (j);
	}
	else
	temp = temp->next;
	}

	return (NULL);
}
