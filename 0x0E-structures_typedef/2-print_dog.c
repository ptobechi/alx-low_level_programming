#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog information
 * @d: dog addreess
 * Return: Always 0 (Success)
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner != NULL d->owner : "nil");
	}
}
