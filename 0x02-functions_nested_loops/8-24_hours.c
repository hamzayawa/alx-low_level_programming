#include "main.h"
/**
 * jack_bauer - prototype fxn that print every minute of a 24 hour period
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hour;
	int min;

	hour = 0;

	while (hour < 24)
	{
		min = 0;

		while (min < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
