#include <stdio.h>

/**
 * main - Find and print largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int factor = 3;
	long int prime = 612852475143;
	long int pf = 0;

	while (prime != 1)
	{
		if (prime % factor == 0)
		{
			prime = prime / factor;
			if (factor > pf)
				pf = factor;

		}
		else
			factor++;
	}
	printf("%ld\n", pf);
	return (0);
}
