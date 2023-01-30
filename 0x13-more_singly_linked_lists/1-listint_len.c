#include <stdio.h>
#include "lists.h"

/**
  * listint_len - number the elements in a linked list
  * @h: head of the linked list
  *
  * Return: number of elements in a linked list
  */
size_t listint_len(const listint_t *h)
{
	int element = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			element++;
		}
	}

	return (element);
}
