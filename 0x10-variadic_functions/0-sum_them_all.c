#include "variadic_functions.h"

/**
  * sum_them_all - sum of all its parameters
  * @n: integer
  *
  * Return: If n == 0, return 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
