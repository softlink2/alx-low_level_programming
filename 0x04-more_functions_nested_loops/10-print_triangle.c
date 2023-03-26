#include "main.h"
#include <stdio.h>

/**
 * print_triangles - print a triangle followed by a newline
 * @size: the size of a triangle
*/

void print_triangle(int size)
{
	int c, d;

	for (c = 0; c < size; c++)
	{
		for (d = 0; d < c; d++)
		{
			printf(" ");
		}
		printf("#");
	}
}
