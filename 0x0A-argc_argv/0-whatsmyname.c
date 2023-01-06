#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: size of program arguments.
 * @argv: string pointer array to the arguments.
 *
 * Return: Always o.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
