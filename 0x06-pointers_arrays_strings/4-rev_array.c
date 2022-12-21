#include "main.h"

/**
 * reverse_array - Reverses the content of an Integer array
 * @a: integer array to be reversed
 * @n: size of elements in an array
 */
void reverse_array(int *a, int n)
{
	int i, len, tmp;

	len = n - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = a[i];
		a[i] = a[len - i];
		a[len - i] = tmp;
	}
}
