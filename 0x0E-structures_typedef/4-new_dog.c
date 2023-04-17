#include "dog.h"
#include <stdlib.h>
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

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
