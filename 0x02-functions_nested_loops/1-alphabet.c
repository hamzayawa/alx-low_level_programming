#include "main.h"
/**
 * print_alphabet - print alphabets a-z
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
