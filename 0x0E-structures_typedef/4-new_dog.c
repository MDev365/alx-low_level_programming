#include "dog.h"
#include <stdlib.h>
#include <string.h>
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

	if (name != NULL)
	{
		dog_name = malloc(sizeof(char) * strlen(name));
		if (dog_name == NULL)
			return (NULL);
		for(i = 0 ; name[i] != '\0' ; i++)
			dog_name[i] = name[i];
	}

	if(owner != NULL)
	{
		dog_owner = malloc(sizeof(char) * strlen(owner));
		if (dog_owner == NULL)
			return (NULL);
		for (i = 0; owner[i] != '\0' ; i++)
			dog_owner[i] = owner[i];
	}

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name == NULL || owner == NULL || age <= 0)
		return (NULL);
	d->name = dog_name;
	d->age = age;
	d->owner = dog_owner;

	return (d);
}
