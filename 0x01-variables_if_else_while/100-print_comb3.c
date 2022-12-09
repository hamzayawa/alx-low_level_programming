#include <stdio.h>

/**
  * main - Entry point
	* @while - nested while loop
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int num1 = 10;

	while (num1 <= 19)
	{
		int num2 = 10;

		while (num2 <= 19)
		{
			if ((num2 % 10) > (num1 % 10))
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				if (num1 != 18 || num2 != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
