#include <stdlib.h>
#include <string.h>

char *
argstostr(int ac, char **av)
{
	char c, d, e = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (c = 0; c < ac; c++)
		d += strlen(av[c]) + 1;
	ptr = malloc(d + 1);
	if (ptr == NULL)
		return (NULL);
	for (c = 0; c < ac; c++)
	{
		for (d = 0; av[c][d]; d++)
			ptr[e++] = av[c][d];
		if (av[c][d] == '\0')
			ptr[e++] = '\n';
	}
	ptr[e] = '\0';

	return (ptr);
}
