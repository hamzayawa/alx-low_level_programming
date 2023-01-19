#include <stdio.h>
/**
 * main -  program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array pointer string
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
