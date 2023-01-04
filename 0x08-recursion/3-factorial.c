#include "main.h"

/**
  * factorial - fxn that returns the factorial of a given number.
  * @n: factorial number given
  *
  * Return: integer
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
