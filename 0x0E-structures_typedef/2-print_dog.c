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
		printf("\n");
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
		printf("Name: %s\n", d->name);

	if (d->age <= 0)
		printf("Age: %f\n", (double) 0);
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
