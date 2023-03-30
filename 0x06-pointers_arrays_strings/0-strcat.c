#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate two strings
 * @dest: destination
 * @src: source
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
    unsigned int c, e;

    for (c = strlen(dest), e = 0; src[e] != '\0'; c++, e++)
        dest[c] = src[e];
    dest[c] = '\0';

    return (dest);
}

