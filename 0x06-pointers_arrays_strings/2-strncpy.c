#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	unsigned e;

	for (e = 0; src[e] != '\0' && e < strlen(src); e++)
		if (e < (unsigned) n)
			dest[e] = src[e];
	dest[e] = '\0';

	return (dest);
}
