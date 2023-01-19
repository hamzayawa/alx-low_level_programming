#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest:char dest
 * @src: char src
 * @n:length int
 * Return:char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dlen;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (dlen = 0; src[dlen] != '\0' && dlen < n; dlen++)
	{
		dest[i + dlen] = src[dlen];
	}
	dest[i + dlen] = '\0';
	return (dest);
}
