#include "lists.h"

/**
 * sum_dlistint - Total of all the data of a dlistint_t list.
 * @head: head of the dlistint_t list.
 *
 * Return: Total of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
