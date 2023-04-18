#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - creates a new dog function
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL || age <=0)
	{
		return (NULL);
	}
	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = (char *)malloc((strlen(name) + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = (char *)malloc((strlen(owner) + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = strcpy(d->owner, owner);
	return (d);
}
