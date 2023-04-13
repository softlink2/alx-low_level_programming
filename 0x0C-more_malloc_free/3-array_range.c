#include "main.h"
#include <stdlib.h>

int *
array_range(int min, int max)
{
	int *ptr, d, c;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (d = 0, c = min; c <= max; c++, d++)
		ptr[d] = c;

	return (ptr);
}
