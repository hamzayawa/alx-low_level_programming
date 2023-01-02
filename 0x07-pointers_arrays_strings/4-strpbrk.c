#include "main.h"

/**
 * _strpbrk - Searches for a string of bytes.
 * @s: string to be searched.
 * @accept: bytes to be searched for.
 *
 * Return: pointer to the byte in s that matches.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
