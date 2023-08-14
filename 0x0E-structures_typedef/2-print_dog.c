#include <stdio.h>
#include "dog.h";

/**
 * print_dog - print dog information
 * @d: dog addreess
 * Return: Always 0 (Success)
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return

	printf("Name: %s\n", d->name != NULL ? d->name : "nil");
	printf("Age: %f\n", d->age != NULL ? d->age : "nil");
	printf("Owner: %s\n", d->owner != NULL d->owner : "nil");
}
