#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int num1 = 0, num2, mult, ones, tenth, hundred;

	if (n >= 0 && n <= 15)
	{
		while (num1 <= n)
		{
			num2 = 0;

			while (num2 <= n)
			{
				mult = num1 * num2;
				ones = mult % 10;
				tenth = mult % 100 / 10;
				hundred = mult / 100;
				if (hundred == 0 && num2 != 0)
				{
					_putchar(' ');
					if (tenth == 0)
						_putchar(' ');
					else
						_putchar(tenth + '0');
				}
				else if (hundred != 0)
				{
					_putchar(hundred + '0');
					_putchar(tenth + '0');
				}
				_putchar(ones + '0');
				if (num2 != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				num2++;
			}
			_putchar('\n');
			num1++;
		}
	}
}
