#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: integer array
 * @size: number of elements in the array
 * @cmp: pointer to a function used to compare values
 * Return: index of the first element for which cmp does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (size <= 0 || !array)
		return (-1);

	for (c = 0; c < size; c++)
		if ((*cmp)(array[c]))
			return (c);

	return (-1);
}
