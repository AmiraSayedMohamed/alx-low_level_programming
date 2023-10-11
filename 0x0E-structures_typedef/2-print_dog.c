#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 * @d: the dog we want to print
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
	{
		if (d->name || d->age || d->owner)
		{
			printf("Name: %s\n", d->name;
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
		else
			printf("Name: (nil)\n");

	}
}
