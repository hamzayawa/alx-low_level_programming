#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - fxn that prints a string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (strlen(s))
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
