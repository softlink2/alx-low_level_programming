#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

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

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
