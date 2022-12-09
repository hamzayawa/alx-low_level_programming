#include <stdio.h>

/**
  * main - Entry point 
	* @while - nested while loop
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int num1 = 0;
	int num2;
	while (num1 <= '9')
	{
		num2 = num1 + 1;
		while (num2 <= '9')
		{
			if (num2 > num1)
			{
				putchar (num1);
				putchar (num2);
				if (num1 == '8' && num2 == '9')
				{
					putchar (',');
					putchar (' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar ('\n');
	return (0);
}
