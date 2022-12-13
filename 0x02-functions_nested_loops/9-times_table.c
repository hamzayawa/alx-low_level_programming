#include "main.h"
/**
*times_table - Prototype function that prints the 9 times table
*
*Return: nothing
*/
void times_table(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			if ((i * j) < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar((i * j) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
