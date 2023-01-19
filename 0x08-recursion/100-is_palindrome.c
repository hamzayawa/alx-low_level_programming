#include "main.h"
#include <string.h>
/**
 * is_palindrome - Main Entry
 * @s: input
 * Return: 0
 */
int _strlen_palindrome(char *s);
int palindrome_compare(char *s, int l);

int is_palindrome(char *s)
{
	int l;

	l = _strlen_palindrome(s);
	return (palindrome_compare(s, l));
}
/**
 * _strlen_palindrome - Length of string
 * @s: input
 * Return: 0
 */
int _strlen_palindrome(char *s)
{
	if (strlen(s))
	{
		return (1 +  _strlen_palindrome(s + 1));
	}
	return (0);
}
/**
 * palindrome_compare - Compare palindrome
 * @s: input
 * @l: input
 * Return: 0
 */
int palindrome_compare(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	else if (*s == *(s + (l - 1)))
	{
		return (palindrome_compare(s + 1, l - 2));
	}
	else
		return (0);
}
