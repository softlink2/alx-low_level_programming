#include "main.h"
#include <string.h>

/**
 * puts_half - print half of a string followed by a newline
 * @s: string
 */

void puts_half(char *s)
{
	unsigned int c, len;

	if (strlen(s) > 0)
	{
		if (strlen(s) % 2 != 0)
		{
			len = (strlen(s) + 1) / 2;
		}
		else
		{
			len = (strlen(s)) / 2;
		}
		for (c = len; c < strlen(s); c++)
			_putchar(s[c]);
	}
	_putchar('\n');
}

