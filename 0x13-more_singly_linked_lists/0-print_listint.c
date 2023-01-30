#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: pointer to the head of the list_t list.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int element = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			element++;
		}
	}

	return (element);
}
