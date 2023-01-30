#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list.
 * @head: pointer to the address
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	next = NULL;

	while ((*head)->next != NULL)
	{
		prev = (*head)->next;
		(*head)->next = next;
		next = *head;
		*head = prev;
	}

	(*head)->next = next;

	return (*head);
}
