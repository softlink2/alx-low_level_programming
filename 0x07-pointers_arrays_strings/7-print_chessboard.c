#include "main.h"
#include <stdio.h>

/**
* print_chessboard - print a chess board
* @a: chessboard
*/

void print_chessboard(char (*a)[8])
{
	int c, d;

	for (c = 0; c < 8; c++)
	{
		for (d = 0; d < 8; d++)
		{
			putchar(a[c][d]);
		}
		putchar('\n');
	}
}

