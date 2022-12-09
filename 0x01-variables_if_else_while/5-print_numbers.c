#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int digits = 0;

	while (digits < 10) /*prints all single digit numbers while the digits are less than 10*/
	{
	printf("%d", digits); 
	digits++; /*increment digits by one until it reaches 10 10*/
	}
	putchar ('\n'); /*add new line at the end*/
	return (0);
}
