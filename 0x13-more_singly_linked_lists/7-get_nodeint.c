#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - nth node of a listint_t linked list
 * @head: start of the list
 * @index: index of the node
 *
 * Return: the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count != index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		count++;
	}
	return (head);
}
