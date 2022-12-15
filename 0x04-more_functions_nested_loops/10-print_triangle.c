#include "main.h"

/**
 * print_triangle - Print triangle of given size
 * @size: Size of triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;

		while (i < size)
		{
			j = size - 1;

			while (j > i)
			{
				_putchar(' ');
				j--;
			}
			j = 0;

			while (j < i + 1)
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
