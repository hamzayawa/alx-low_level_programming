#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenate two strings using n amount of s2
 * @s1: First string
 * @s2: String to add to end of s1
 * @n: Amount of s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, len = 0, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (len < strlen(s1))
		len++;
	size = (len + n) * sizeof(*str);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);

	while (i < size && i < strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}

	while (i < size && j < strlen(s2))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
