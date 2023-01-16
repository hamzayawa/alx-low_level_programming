#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_n;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog_n = malloc(sizeof(dog_t));
	if (dog_n == NULL)
		return (NULL);

	dog_n->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_n->name == NULL)
	{
		free(dog_n);
		return (NULL);
	}

	dog_n->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_n->owner == NULL)
	{
		free(dog_n->name);
		free(dog_n);
		return (NULL);
	}

	dog_n->name = _strcopy(dog_n->name, name);
	dog_n->age = age;
	dog_n->owner = _strcopy(dog_n->owner, owner);

	return (dog_n);
}

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	for (; *str != '\0'; str++)
	{
		len++;
	}

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
