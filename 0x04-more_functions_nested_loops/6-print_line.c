#include "main.h"

/**
 * print_line - Print a line of n length
 * @n: Length of line
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
			_putchar('_');
		i++;
	}
	_putchar('\n');
}
