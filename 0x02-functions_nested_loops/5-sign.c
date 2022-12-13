#include "main.h"
/**
 * print_sign - prints the sign of a number +/-
 * @n: Number to be checked/tested
 *
 *
 * Return: 1 for num > zero, 0 for num == Zero, and -1 for < num.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


