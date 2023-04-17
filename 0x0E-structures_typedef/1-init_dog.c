#include "dog.h"

/**
 * init_dog - initialize a struct dog
 * @d: pointer to struct dog
 * @name: pointer to string name of dog
 * @age: age of dog
 * @owner: pointer to string name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

