#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: the struct pointer.
 * @name: pointer to Dog's name
 * @age: pointer to Dog's age
 * @owner: pointer to dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}