#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int num1 = 48;

	while (num1 < 58)
	{
		int num2 = 49;

		while (num2 < 58)
		{
			int num3 = 50;

			while (num3 < 58)
			{
				if (num3 > num2 && num2 > num1)
				{
					putchar (num1);
					putchar (num2);
					putchar (num3);
					if (num1 != 55 || num2 != 56)
					{
						putchar (',');
						putchar (' ');
					}
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar ('\n');
	return (0);
}
