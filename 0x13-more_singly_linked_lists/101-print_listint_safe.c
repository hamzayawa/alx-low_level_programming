#include "lists.h"
#include <stdio.h>

size_t loop_listint_len(const listint_t *head);

/**
 * print_listint_safe - prints a listint_t list.
 * @head: pointer to head of listint_t list.
 *
 * Return: number of n.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, i = 0;

	n = loop_listint_len(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}


/**
 * loop_listint_len - Counts the number of unique n loop.
 * @head: pointer to the head of listint_t.
 *
 * Return: If the list is not looped - 0.
 */
size_t loop_listint_len(const listint_t *head)
{
	const listint_t *t, *h;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				n++;
				t = t->next;
				h = h->next;
			}

			t = t->next;
			while (t != h)
			{
				n++;
				t = t->next;
			}

			return (n);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (0);
}
