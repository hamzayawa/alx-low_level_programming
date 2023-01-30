#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - the add of all the data (n) of a listint_t linked list.
 * @head: Pointer to the start of the list
 *
 * Return: if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int add;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
