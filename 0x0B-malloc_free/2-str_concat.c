#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string to concatenated upon.
 * @s2: string to be concatenated to s1.
 *
 * Return: NULL if fails.
 */
char *str_concat(char *s1, char *s2)
{
	int i, concat_i = 0, len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		str[concat_i++] = s2[i];

	return (str);
}
