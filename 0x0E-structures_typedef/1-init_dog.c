#include "dog.h"

/**
 * init_dog - initialise a dog
 *
 * @d: a dog's address
 * @name: a dog's name
 * @age: a dog's age
 * @owner: a dog's owner
 *
 */

void
init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
