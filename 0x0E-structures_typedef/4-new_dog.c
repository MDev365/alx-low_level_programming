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
	char *dog_name, *dog_owner;
	int i;

	if (name == NULL)
		dog_name = NULL;
	else
	{
		dog_name = malloc(sizeof(char) * (1 + _strlen(name)));
		if (dog_name == NULL)
			return (NULL);

		for (i = 0 ; name[i] != '\0' ; i++)
			dog_name[i] = name[i];
		dog_name[i] = '\0';
	}

	if (owner == NULL)
		dog_owner = NULL;
	else
	{
		dog_owner = malloc(sizeof(char) * (1 + _strlen(owner)));
		if (dog_owner == NULL)
		{
			free(dog_name);
			return (NULL);
		}
		for (i = 0; owner[i] != '\0' ; i++)
			dog_owner[i] = owner[i];
		dog_owner[i] = '\0';
	}

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	d->name = dog_name;
	d->age = age;
	d->owner = dog_owner;
	return (d);
}
