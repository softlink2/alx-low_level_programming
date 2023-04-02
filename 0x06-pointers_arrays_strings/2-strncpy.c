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

	for (e = 0; e < n && src[e]; e++)
		dest[e] = src[e];
	for (; e < n; e++)
		dest[e] = '\0';
	return (dest);
}

