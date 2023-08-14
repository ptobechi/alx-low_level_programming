#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (dog_t), or NULL if allocation fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_t_ptr = malloc(sizeof(dog_t));

	if (dog_t_ptr == NULL)
		return (NULL);

	dog_t_ptr->name = malloc(strlen(name) + 1);
	if (dog_t_ptr->name == NULL)
	{
		free(dog_t_ptr);
		return (NULL);
	}
	strcpy(dog_t_ptr->name, name);

	dog_t_ptr->owner = malloc(strlen(owner) + 1);
	if (dog_t_ptr->owner == NULL)
	{
		free(dog_t_ptr->name);
		free(dog_t_ptr);
		return (NULL);
	}
	strcpy(dog_t_ptr->owner, owner);

	dog_t_ptr->age = age;

	return (dog_t_ptr);
}
