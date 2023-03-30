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
	int e;

	if (src == NULL || dest == NULL)
		return (dest);
	for (e = 0; src[e] != '\0' && e < n; e++)
		dest[e] = src[e];

	return (dest);
}
