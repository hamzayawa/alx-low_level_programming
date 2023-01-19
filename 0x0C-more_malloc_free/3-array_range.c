#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers.
  * @min: min value
  * @max: max value
  *
  * Return: integer value
  */
int *array_range(int min, int max)
{
	int *ar, i = 0, n, m;

	n = min;
	m = max;

	if (n > m)
		return (NULL);

	ar = malloc((sizeof(int) * (m - n)) + sizeof(int));

	if (ar == NULL)
		return (NULL);

	while (n <= m)
	{
		ar[i] = n;
		i++;
		n++;
	}

	return (ar);
}
