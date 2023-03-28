#include "main.h"

/**
 * puts2 - print every other character of a string, starting with the first
 * and followed by a newline
 * @str: string to print
 */

void puts2(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (!(c % 2))
			_putchar(s[c]);
		++c;
	}
	_putchar('\n');
}

