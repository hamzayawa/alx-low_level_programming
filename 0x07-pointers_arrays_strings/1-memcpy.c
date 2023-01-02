#include "main.h"

/**
 * _memcpy -  fxn that copies n bytes from memory area
 * @dest: copy to
 * @src: copy from
 * @n:aAmount to copy from memory area
 *
 * Return: Pointer to desr
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
