#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements.
 * @size: size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	void *len;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = malloc(size * nmemb);

	if (len == NULL)
		return (NULL);

	str = len;

	for (i = 0; i < (size * nmemb); i++)
		str[i] = '\0';

	return (len);
}
