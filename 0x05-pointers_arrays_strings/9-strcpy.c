#include "main.h"
#include <string.h>

/**
 * _strcpy - copy the string pointed to by src, including
 * the terminating null* byte, to the buffer pointed to
 * by dest.
 * @src: string to copy
 * @dest: buffer to copy to
 * Return: a pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	unsigned int c;

	for (c = 0; c < strlen(src); c++)
		dest[c] = src[c];
	dest[c] = '\0';

	return (dest);
}

