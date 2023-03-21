#include <stdio.h>

/**
 * _islower - check for lowercase character
 * @c: character to search
 * Return: integer - 1 if c is lowercase and 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
