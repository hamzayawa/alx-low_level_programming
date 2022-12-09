#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int num = 48; /*In the ASCII table, 48 is equivalent to 0.*/

	while (num <= 57)
	{
		putchar (num);
		num++; /*increment num by 1 until it reaches 57*/
	}
	putchar ('\n'); /*add new line*/
	return (0);
}
