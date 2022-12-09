#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	char lcase = 'a';

	while (lcase <= 'z')
	{
		putchar (lcase);
		lcase++;
	}
	putchar ('\n');
	return (0);
}
