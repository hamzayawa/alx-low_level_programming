#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings
 * @s1:string one
 * @s2:string two
 * Return: 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	while (((strlen(s1)) && (strlen(s2))) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 != *s2)
		return (*s1 - *s2);

	return (0);
}
