#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

char **
strtow(char *str)
{
    int c, d, e = 0;
    char **ptr;

    if (str == NULL || str[0] == '\0')
	return (NULL);
    ptr = malloc(strlen(str) + 1);
    if (ptr == NULL)
	return (NULL);
    for (c = 0; str[c]; c++)
    {
    	if (!isblank(str[c]) && str[c] != '\0')
	{
	    ptr[e][d++] = str[c];
	} else {
	    ptr[e++][d] = '\0';
	    d = 0;
	    continue;
	}
    }
    ptr[e][d] = '\0';
    return (ptr);
}

