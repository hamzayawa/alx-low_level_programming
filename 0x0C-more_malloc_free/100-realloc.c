#include "main.h"
#include <stdlib.h>

/**
  * _realloc - ...
  * @ptr: ...
  * @old_size: ...
  * @new_size: ...
  *
  * Return: ...
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_str;
	unsigned int i, o, n;

	o = old_size;
	n = new_size;

	if (n == o)
		return (ptr);

	if (ptr == NULL)
	{
		ptr_str = malloc(n);

		if (ptr_str == NULL)
			return (NULL);

		return (ptr_str);
	}
	else
	{
		if (n == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	ptr_str = malloc(n);

	if (ptr_str == NULL)
		return (NULL);

	for (i = 0; i < o && i < n; i++)
	{
		ptr_str[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (ptr_str);
}
