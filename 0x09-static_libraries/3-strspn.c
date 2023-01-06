#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string.
 * @accept: number of bytes.
 * Return:  number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
