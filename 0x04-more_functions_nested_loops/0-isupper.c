#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase character
 * @c: integer
 * Return: 1 if c is uppercase and 0 otherwise
*/

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z' ? (1) : (0));
}

