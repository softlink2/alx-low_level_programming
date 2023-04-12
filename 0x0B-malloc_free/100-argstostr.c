#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* argstostr - concatenate all arguments
* @ac: argument count
* @av: argument vector
* Return: NULL or a pointer to a new string
*/

char *argstostr(int ac, char **av)
{
	char *ar;
	int i;
	unsigned int d, count, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	count = 0;
	for (i = 0; i < ac; i++)
		count += strlen(av[i]);

	ar = malloc(count + ac);
	if (ar == NULL)
		return (NULL);

	for (i = 0, d = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
			ar[d++] = av[i][j];
		ar[d++] = '\n';
	}

	ar[d] = '\0';
	return (ar);
}
