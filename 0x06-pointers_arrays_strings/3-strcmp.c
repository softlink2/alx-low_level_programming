#include "main.h"

/**
 * _strcmp - compares two strings
 * @s2: paremeter to compare
 * @s1: paremeter to compar froe.
 * Return: always 0 (succes)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
