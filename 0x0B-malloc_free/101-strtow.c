#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - fxn that splits a string into words
 * @grid: array of char.
 * @height: height of array.
 *
 * Return: no return
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	unsigned int height, i, j, k, c;
	char **out_s;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;

	out_s = malloc((height + 1) * sizeof(char *));

	if (out_s == NULL || height == 0)
	{
		free(out_s);
		return (NULL);
	}

	for (i = k = 0; i < height; i++)
	{
		for (c = k; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				k++;

			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				out_s[i] = malloc((c - k + 2) * sizeof(char));

				if (out_s[i] == NULL)
				{
					ch_free_grid(out_s, i);
					return (NULL);
				}
				break;
			}
		}

		for (j = 0; k <= c; k++, j++)
			out_s[i][j] = str[k];
		out_s[i][j] = '\0';
	}
	out_s[i] = NULL;
	return (out_s);
}
