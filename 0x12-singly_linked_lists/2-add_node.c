#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a temp node at the beginning of a list_t list
 * @head: pointer to the head of the list_t list.
 * @str: string to be added to the list_t list.
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);

	while (i < strlen(str))
		i++;

	temp->len = i;
	temp->next = *head;
	*head = temp;
	return (*head);
}
