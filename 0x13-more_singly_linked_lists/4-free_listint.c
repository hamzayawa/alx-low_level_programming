#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Free all nodes from a list
 * @head: Pointer to the start of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
