#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - Prints number of elements in list
* @h: The list
* Return: the number of nodes.
*/

size_t list_len(const list_t *h)
{
   int c = 0;


   while (h)
   {
       c++;
       h = h->next;
   }
   return (c);
}

