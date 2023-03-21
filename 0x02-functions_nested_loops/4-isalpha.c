#include <stdio.h> 

/**
 * _islower - check for alphabetic character
 * @c: character to search
 * Return: integer - 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
