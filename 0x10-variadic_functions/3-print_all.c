#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints any given args
 * @format: characters representing the argument types.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}

/**
 * print_char - prints char.
 * @arg: arguments pointing to
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints integer.
 * @arg: arguments pointing to
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float.
 * @arg: arguments pointing to
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string.
 * @arg: arguments pointing to
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
