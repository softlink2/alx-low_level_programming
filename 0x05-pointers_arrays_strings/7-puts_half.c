#include "main.h"
#include <string.h>

/**
 * puts_half - print half of a string followed by a newline
 * @s: string
 */

void puts_half(char *s)
{
	unsigned int c;

	for (c = strlen(s) / 2; c <= strlen(s) - 1; c++)
		_putchar(s[c]);
	_putchar('\n');
}

