#include "main.h"

/**
 * puts2 - prints 1 character out of 2 string.
 *@str: the string to print.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
