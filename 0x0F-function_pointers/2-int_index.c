#include "function_pointers.h"

/**
  * int_index - searches for an integer.
  * @array: integer array.
  * @size: number of elements in the array.
  * @cmp: compare values.
  *
  * Return: If no element matches, return -1 \
	*					If size <= 0, return -1.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}

	return (-1);
}
