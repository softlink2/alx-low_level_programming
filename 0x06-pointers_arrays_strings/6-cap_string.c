#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: a pointer to the first element of the string
 */

char *cap_string(char *str)
{
	unsigned int c;

	for (c = 0; c < strlen(str); c++)
		if (str[c] >= 'a' && str[c] <= 'z')
			if (isspace(str[c - 1]))
				str[c] = (str[c] - 'a') + 'A';
	return (str);
}
