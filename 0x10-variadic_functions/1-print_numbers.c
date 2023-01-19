#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers.
 * @separator: string to be printed btn numbers.
 * @n: number of integers passed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}

