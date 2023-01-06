#include "main.h"
/**
 * _isalpha - Checks for alphabets
 * @c: check if its an alphabet or not
 *
 * Return: 1 for a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
