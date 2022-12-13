#include "main.h"
/**
 * print_last_digit - Prototype fxn that prints the last digit of a number.
 * @n: The integer number inputed.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
