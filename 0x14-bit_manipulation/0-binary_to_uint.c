#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars.
 *
 * Return: converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, m, l;

	n = l = m = 0;
	if (b == NULL)
		return (0);
	while (b[l] != '\0')
	{
		if (b[l] == '0' || b[l] == '1')
			l++;
		else
			return (0);
	}
	while (n < l)
	{
		m = m << 1;
		if (b[n] == '1')
			m += 1;
		n++;
	}
	return (m);
}
