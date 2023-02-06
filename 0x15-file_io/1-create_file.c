#include "main.h"
#include <stdlib.h>

/**
  * create_file - o with a specified name and content
  * @filename: o to create
  * @text_content: content to read into the o
  *
  * Return: 1 on success, -1 on any failure
  */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (o == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		write(o, text_content, len);
	}
	w = close(o);
	if (w == -1)
		return (-1);
	return (1);
}
