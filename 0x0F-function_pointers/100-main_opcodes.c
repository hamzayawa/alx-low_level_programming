#include <stdio.h>
#include <stdlib.h>

/**
 * main - opcodes of the function
 * @argc: number of args
 * @argv: argument val to print
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char *a;
	int i, val;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	a = (char *)&main;
	val = atoi(argv[1]);
	i = 0;

	while (i < val - 1)
	{
		printf("%02hhx ", a[i]);
		i++;
	}
	printf("%02hhx\n", a[i]);
	return (0);
}
