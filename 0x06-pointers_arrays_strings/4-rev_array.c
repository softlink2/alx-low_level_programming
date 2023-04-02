#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
		int d, tmp, s = n - 1;

		for (d = 0; d < s / 2; d++)
		{
			tmp = a[d];
			a[d] = a[s - d];
			a[s - d] = tmp;
		}
}

