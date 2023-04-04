#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strpbrk - search a string for a set of bytes
 * @s: string
 * @accept: bytes to search for
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
        unsigned int c, d;
        int found = 0;

        if (s == NULL || accept == NULL)
                return (NULL);
        for (c = 0; c < strlen(s); c++)
                for (d = 0; d < strlen(accept); d++)
                        if (!found && s[c] == accept[d])
                                found = c;
        return (s + found);
}
