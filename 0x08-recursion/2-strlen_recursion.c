#include "main.h"

int
_strlen_recursion(char *s)
{
	int n = 1;

	if (!*s)
		return (0);
	n = n + _strlen_recursion(s + n);

	return (n);
}
