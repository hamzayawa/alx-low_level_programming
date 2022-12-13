#include <stdio.h>

/**
 * main - Print multiples of 3 & 9 under 1024
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, sum;

	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
