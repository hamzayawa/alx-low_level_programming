#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list.
  * @head: pointer to the start of the list.
  *
  * Return: if the linked list is empty return 0.
  */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n = 0;

	if (*head != NULL)
	{
		new = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new;
	}

	return (n);
}
