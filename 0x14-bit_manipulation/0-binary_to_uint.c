#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars.
 *
 * Return: converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int n = 0, m = 1;

	if (b == '\0')
		return (0);

	for (l = 0; b[l];)
		l++;

	for (l -= 1; l >= 0; l--)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);

		n += (b[l] - '0') * m;
		m *= 2;
	}
	return (n);
}
