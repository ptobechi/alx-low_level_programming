#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog information
 * @name: Dog name
 * @age: dog age
 * @owner: dog owner
 * description: This structure holds all information of dogs
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
