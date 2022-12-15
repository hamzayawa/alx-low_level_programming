#include "main.h"

/**
 * print_square - Print a nxn square of #
 * @size: Size of square sides
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
