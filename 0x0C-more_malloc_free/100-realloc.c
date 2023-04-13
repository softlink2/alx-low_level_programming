#include "main.h"
#include <stdlib.h>
#include <string.h>

void *
_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *copy;

	if (ptr == NULL)
	{
		copy = malloc(new_size);
		return (copy);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	copy = malloc(new_size);
	if (copy == NULL)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;
	memcpy(copy, ptr, new_size);
	free(ptr);

	return (copy);
}
