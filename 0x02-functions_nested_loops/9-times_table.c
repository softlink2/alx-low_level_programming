#include "main.h"
#include <stdio.h>

/**
 * times_table - print the 9 times table, starting with 0
*/

void times_table(void)
{
	int c, e;

	for (c = 0; c <= TIMES_TABLE; c++)
	{
		for (e = 0; e <= TIMES_TABLE; e++)
		{
			if (e == 0)
				printf("%d,", e * c);
			else
				e < TIMES_TABLE ? printf("%3d,", e * c) : printf("%3d", e * c);
		}
		printf("\n");
	}
}
