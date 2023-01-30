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
	size_t element = 1;

	while (h)
	{
		element++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (element);
}
