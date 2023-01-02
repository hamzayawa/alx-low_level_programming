#include "main.h"

/**
 * _memset - function that fills the first n bytes of the memory
 * @s: memory area that points to s
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
