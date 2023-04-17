#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *
new_dog(char *name, float age, char *owner)
{
	dog_t *copy;

	/* XXX: TODO - FIX MEMORY LEAK */
	copy = malloc(sizeof(dog_t));
	if (copy != NULL && name != NULL && owner != NULL)
	{
		copy->name = malloc(strlen(name) + 1);
		if (copy->name == NULL)
		{
			free(copy);
			return (NULL);
		}

		copy->owner = malloc(strlen(owner) + 1);
		if (copy->owner == NULL)
		{
			free(copy->name);
			free(copy);
			return (NULL);
		}

		strcpy(copy->name, name);
		strcpy(copy->owner, owner);
		copy->age = age;

		return (copy);
	}

	return (NULL);
}
