#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - number of elements of a list
  * @h: linked list
  *
  * Return: elements of a list
  */
size_t list_len(const list_t *h)
{
	size_t el = 0;

	while (h)
	{
		h = h->next;
		el++;
	}

	return (el);
}
