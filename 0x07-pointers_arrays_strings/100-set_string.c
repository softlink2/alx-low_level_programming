#include "main.h"

void
set_string(char **s, char *to)
{
	*(s + 0) = &to[0];
}
