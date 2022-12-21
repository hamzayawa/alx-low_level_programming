#include "main.h"
#include <stdio.h>

/**
 * rot13 -  i   function that encodes a string using rot13.
 * @s: string to encode using rot13
 * Return: encode string
 */
char *rot13(char *s)
{
	int i, j;
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
