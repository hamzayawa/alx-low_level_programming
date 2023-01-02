#include "main.h"
#include <string.h>

/**
 * _strchr - find char in a string
 * @s: pointer string
 * @c: char to search for
 * Return: pointer to the first occurrence of the character c
*/

char *_strchr(char *s, char c)
{
	while (strlen(s))
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
