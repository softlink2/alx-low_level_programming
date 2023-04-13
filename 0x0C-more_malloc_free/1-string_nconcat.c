#include "main.h"
#include <stdlib.h>
#include <string.h>

char *
string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int c, d;

	s2 = (s2 == NULL) ? "" : s2;
	s1 = (s1 == NULL) ? "" : s1;
	if (n >= strlen(s2))
		n = strlen(s2);
	ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (c = 0; s1[c] != '\0'; c++)
		ptr[c] = s1[c];
	for (d = 0; d < n; d++)
		ptr[c + d] = s2[d];
	ptr[c + d] = '\0';

	return (ptr);
}
