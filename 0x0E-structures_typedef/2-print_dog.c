#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL || d->age == 0 || d->owner == NULL)
		printf("(nil)");
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
		return;
}
