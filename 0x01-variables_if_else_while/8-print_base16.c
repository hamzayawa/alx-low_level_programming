#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	char hex_num = 48; /*In the ASCII table, 48 is equivalent to 0.*/
	char hex_a = 97; /*In the ASCII table, 97 is equivalent to 0.*/

	while (hex_num <= 57)
	{
		putchar (hex_num);
		hex_num++; /*increment num by 1 until it reaches 57*/
	}
	while (hex_a <= 102) /*In the ASCII table, 102 is equivalent to f*/
	{
		putchar (hex_a);
		hex_a++; /*increment num by 1 until it reaches 57*/
	}
	putchar ('\n'); /*add new line*/
	return (0);
}
