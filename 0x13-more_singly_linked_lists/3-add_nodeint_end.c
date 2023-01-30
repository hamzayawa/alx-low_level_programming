#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - new listint_t node to the end of a list
 * @head: pointer to the start of the list
 * @n: assign to integer value of the node
 *
 * Return: address of the new node, NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (tmp != NULL && tmp->next != NULL)
		tmp = tmp->next;
	if (tmp != NULL)
		tmp->next = new;
	else
		*head = new;
	return (new);
}
