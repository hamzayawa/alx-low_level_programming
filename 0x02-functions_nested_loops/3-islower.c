#include "main.h"
/**
 * _islower - check if the letter is in lower case.
 * @c: The letter to be checked
 *
 * Return: 1 (True) else 0 (False)
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
