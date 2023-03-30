#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings using at most n bytes
 * @dest: destination
 * @src: source
 * @n: number of bytes
 */

char *_strncat(char *dest, char *src, int n)
{
    unsigned int c;
    int e;

    for (c = strlen(dest), e = 0; src[e] != '\0' && e < n; c++, e++)
        dest[c] = src[e];
    dest[c] = '\0';

    return (dest);
}
