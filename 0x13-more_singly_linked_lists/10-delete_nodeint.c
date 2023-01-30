#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the start of the list
 * @index: location in a list
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *prev;
	unsigned int count;

	if (head == NULL)
		return (-1);
	count = 0;
	cur = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = cur->next;
		free(cur);
		return (1);
	}
	while (count != index)
	{
		prev = cur;
		cur = cur->next;
		if (cur == NULL)
			return (-1);
		count++;
	}
	prev->next = cur->next;
	free(cur);
	return (1);
}
