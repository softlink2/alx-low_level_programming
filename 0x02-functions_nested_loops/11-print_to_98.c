#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98, followed by a newline
 * @n: int
*/

void print_to_98(int n)
{
	/**
	 * int step = n >= 98 ? -1 : 1;
	 * for (; n != 98; n += step) {
	 *   printf("%d%s", n, n != 98 ? ", " : "");
	 * }
	 * printf("98\n");
	 */

	if (n >= 98)
		for (; n >= 98; n--)
			printf("%d%s", n, n > TO98 ? ", " : "");
	else
		for (; n <= TO98; n++)
			printf("%d%s", n, n < TO98 ? ", " : "");
	printf("\n");
}

/*

*/