#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of listint_t list.
 * @head: pointer to the address of listint_t list.
 * @n: integer for new node.
 *
 * Return: address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;
		*head = new;

		return (new);
	}

	return (NULL);
}
