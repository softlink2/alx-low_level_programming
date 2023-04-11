#include <stdlib.h>

char *
create_array(unsigned int size, char c)
{
	char *buf;
	unsigned int i;

	if (size == 0)
		return (NULL);
	buf = malloc(size * sizeof(char));
	if (buf == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		buf[i] = c;

	return (buf);
}
