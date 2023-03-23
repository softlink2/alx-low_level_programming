#include "main.h"
#include <stdio.h>

/**
 * times_table - print N times table, starting with 0
 * Time complexity is O(n ^ 2)
 * @n: N times table
*/

void print_times_table(int n)
{
	int c, e;

	if (n > 15 || n < 0)
		return;
	for (c = 0; c <= n; c++)
	{
		for (e = 0; e <= n; e++)
		{
			if (e == 0)
				printf("%d,", e * c);
			else
				e < n ? printf("%4d,", e * c) : printf("%4d", e * c);
		}
		printf("\n");
	}
}
