#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string to encode using rot13
 * Return: encode string
 */
char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			while ((s[i] > 77 && s[i] < 91) || (s[i] >= 109 && s[i] <= 123))
			{
				s[i] -= 13;
				i++;
			}
			while ((s[i] > 64 && s[i] < 78) || (s[i] > 96 && s[i] < 110))
			{
				s[i] += 13;
				i++;
			}
		}
		else
			i++;
	}
	return (s);
}
