#include "main.h"

/**
 **_strncpy -main entry.
 *void: nothing
 *@dest: char pointer
 *@src: char pointer
 *@n: integer variable
 *Description: function that copies a string.
 * Return:  pointer to the resulting string dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
