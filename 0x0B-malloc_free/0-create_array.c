#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars
 * @size: array size
 * @c: Char to initialize with
 *
 * Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
