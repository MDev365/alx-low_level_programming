#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - sting length
 * @s: string
 *
 * Return: int the lengthe of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}
	return (i);
}

/**
 * new_dog - initialize a vatiable of type struct dog_t
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (1 + _strlen(name)));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	for (i = 0 ; name[i] != '\0' ; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	d->owner = malloc(sizeof(char) * (1 + _strlen(owner)));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (i = 0; owner[i] != '\0' ; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';

	d->age = age;
	return (d);
}
