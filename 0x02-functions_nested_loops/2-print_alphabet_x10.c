#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print 10x the alphabet
*/

void print_alphabet_x10(void)
{
	int count;

	for (count = 0; count < 10; count++)
		print_alphabet();
	return;
}
