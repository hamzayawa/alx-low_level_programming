#include "main.h"
#include "string.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
**/

void rev_string(char *s)
{
	int i, j, len = strlen(s);
	char tmp;

	j = 0;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j++;
	}
}
