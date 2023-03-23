#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for digit
 * @c: integer
 * Return: 1 if c is a digit and 0 otherwise
*/

int _isdigit(int c)
{
	return (c >= '0' && c <= '9' ? (1) : (0));
}
