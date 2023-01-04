#include "main.h"
#include <string.h>

/**
  * _strlen_recursion - prints the length of a string
  * @s:string
  *
  * Return: integer
  */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (strlen(s))
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
