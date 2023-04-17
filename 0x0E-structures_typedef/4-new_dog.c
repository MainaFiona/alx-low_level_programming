#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * _strcpy - main function to copy
 *
 * @dest: destination to copy
 * @src: source
 *
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * _strlen - returns the length os a string
 *
 * @s: character to get string
 * Return: return length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
	return (i);
}

/**
 * *new_dog - creates a new dog function
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = (char *)malloc((_strlen(name) + 1) * sizeof(char));
	if (d->name == NULL)
	{
		return (NULL);
	}
	d->owner = (char *)malloc((_strlen(owner) + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		return (NULL);
	}
	if (name == NULL || owner == NULL || age <= 0)
	{
		return (NULL);
	}
	d->name = _strcpy(d->name, name);
	d->owner = _strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
