#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print dog struct
 * @d: the dot struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
		printf("Name: %s", d->name);

	if (d->age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %.6f", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", d->owner);
}
