#include "main.h"
#include <string.h>

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurence of the character in the string or
 * NULL otherwise
 */

char *_strchr(char *s, char c)
{
	unsigned int n;

	for (n = 0; n < strlen(s); n++)
		if (s[n] == c)
			return (s + n);
	return (NULL);
}
