#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char tmp;
	unsigned int c, len = strlen(s) - 1;

	for (c = 0; c < strlen(s) / 2; c++)
	{
		tmp = s[len];
		s[len--] = s[c];
		s[c] = tmp;
	}
}

