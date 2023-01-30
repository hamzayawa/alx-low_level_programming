#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the start of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *nodes;
	listint_t *tmp;

	if (head != NULL)
	{
		tmp = *head;
		while (tmp != NULL)
		{
			nodes = tmp;
			tmp = tmp->next;
			free(nodes);
		}
		*head = NULL;
	}
}
