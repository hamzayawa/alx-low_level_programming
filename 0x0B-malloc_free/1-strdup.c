#include "main.h"
#include <stdlib.h>

/**
 * _strdup - pointer to a newly allocated space in memory
 * @str: string to be copied
 *
 * Return: If str == NULL
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
