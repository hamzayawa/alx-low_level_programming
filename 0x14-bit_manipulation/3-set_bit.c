#include "main.h"

/**
 * set_bit - Sets the value of a bit.
 * @n: pointer to the bit.
 * @index: index to set the value at.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
