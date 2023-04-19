#include "function_pointers.h"

/**
 * array_iterator - execute a function given as a parameter on each element
 * of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	for (c = 0; c < size; c++)
		if ((*action)(array[c]))
			(*action)(array[c]);
}
