#include "main.h"


/**
 * _sqrt - natural square root of a number.
 * @num: square root number.
 * @r: root
 *
 * Return: If the number does not have a natural square root, return -1.
 */
int _sqrt(int num, int r);

/**
 * _sqrt_recursion - fxn that returns the natural square r of a number.
 * @n: number
 *
 * Return: If n does not have a natural square r, the fxn should return -1
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, r));
}


/**
 * _sqrt - natural square root of a number.
 * @num: square root number.
 * @r: root
 *
 * Return: If the number does not have a natural square root, return -1.
 */
int _sqrt(int num, int r)
{
	if ((r * r) == num)
		return (r);

	if (r == num / 2)
		return (-1);

	return (_sqrt(num, r + 1));
}

