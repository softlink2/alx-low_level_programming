#include "main.h"
#include <string.h>

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int c;
	int d = 0, sign = 1;

	for (c = 0; c < strlen(s); c++)
	{
		if (s[c] >= '0' && s[c] <= '9')
		{
			if (s[c] - 1 == '-')
				sign = 0;
			d = (d * 10) + s[c] - '0';
		}
	}

	if (sign == 0)
		return (-d);
	return (d);
}
