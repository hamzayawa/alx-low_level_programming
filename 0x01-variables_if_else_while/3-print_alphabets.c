#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	char lcase = 'a';
	char ucase = 'A';

	while (lcase <= 'z') /* runs each lowercase letter a, b, c, ...z*/
	{
		putchar(lcase); /*output a char to stdout */
		lcase++;  /*keeps incrementing by one char until it reaches 'Z'*/
	}
	while (ucase <= 'Z') /* runs each lowercase letter a, b, c, ...z*/
	{
		putchar(ucase); /*prints a char to stdout */
		ucase++; /*keeps incrementing by one char until it reaches 'Z'*/
	}
	putchar('\n'); /*add newline at end*/
	return (0);
}
