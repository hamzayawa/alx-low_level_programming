#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_string - Print string
 * @args: string args
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s",  str);
}

/**
 * print_char - Print character
 * @args: char
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Print integer
 * @args: integer
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Print float
 * @args: float
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - any given type of argument
 * @format: types of arguments being passed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep;
	print_form_t print_form[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	int i, j;

	va_start(args, format);
	i = 0;
	sep = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*print_form[j].c == format[i])
			{
				printf("%s", sep);
				print_form[j].f(args, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
