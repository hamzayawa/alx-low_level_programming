#include "main.h"
/**
 * _islower - check if the letter is in lower case.
 * @c: The letter to be checked
 *
 * Return: 1 (True) else 0 (False)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

