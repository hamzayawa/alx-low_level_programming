#include "main.h"

/**
 * _pow_recursion - fxn that returns the value of x raised to the power of y
 * @x: value to be raised to
 * @y: power raised
 * Return: recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
