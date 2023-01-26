#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end -  new node at the end of a list_t list at the end
 * @head: pointer to start of the list
 * @str: String to copy to str node of list_t item
 *
 * Return: address of new element, NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end;
	unsigned int i;

	i = 0;
	if (*head == NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->next = NULL;
		*head = new;
		new->str = strdup(str);
		while (str[i] != '\0')
			i++;
		new->len = i;
	}
	else
	{
		end = *head;
		while (1)
		{
			if (end->next == NULL)
				break;
			end = end->next;
		}
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->next = NULL;
		end->next = new;
		new->str = strdup(str);
		while (i < strlen(str))
			i++;
		new->len = i;
	}
	return (new);
}
