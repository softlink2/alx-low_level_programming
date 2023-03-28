#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers, followed by a
 * newline
 * @a: array of integers
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c < n - 1)
			printf(", ");
	}
	printf("\n");
}

