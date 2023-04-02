#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string
 * @s2: stirng
 * Return: 0 if equal, -1 if s1 < s2, 1 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0; s1[c] || s2[c]; c++)
		if (s1[c] != s2[c])
			return (s1[c] - s2[c]);
	return (0);
}

