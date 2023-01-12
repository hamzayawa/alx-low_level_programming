#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - memory allocation
  * @b: size allocation
  *
  * Return: Nothing.
  */
void *malloc_checked(unsigned int b)
{
	void *ch = malloc(b);

	if (ch == NULL)
		exit(98);

	return (ch);
}
