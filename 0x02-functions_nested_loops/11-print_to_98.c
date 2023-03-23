#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98, followed by a newline
 * @n: int
*/

void print_to_98(int n)
{
	if (n >= 98)
		for (; n >= 98; n--)
			n > TO98 ? printf("%d, ", n) : printf("%d", n);	
	else
		for (; n <= TO98; n++)
			n < TO98 ? printf("%d, ", n) : printf("%d", n);
	printf("\n");
}
