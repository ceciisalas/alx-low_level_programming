#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Prints a struct dog
 * @d: dog
 *
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (0);
	if (d->name == NULL)
		d->name = "nil";
	if (d->owner == null)
		d->owner = "nil";
	if (d->age == 0)
		printf("Name: %s\nAge: nil\nOwner: %s\n", d->name, d->owner);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
