#include "main.h"
#include <stdlib.h>
#include <string.h>

#define MAX 256

/**
  * leet - convert a string into leetspeak
  * @s: string
	* Return: string
  */

char *leet(char *s)
{
	unsigned int i = 0;
	char *copy = malloc(strlen(s) + 1), permit[MAX] = { 0 };

	permit['A'] = permit['a'] = '4';
	permit['e'] = permit['E'] = '3';
	permit['o'] = permit['O'] = '0';
	permit['t'] = permit['T'] = '7';
	permit['l'] = permit['L'] = '1';

	for (i = 0; i < strlen(s); i++)
	{
		if (permit[(unsigned char) s[i]] != 0)
		{
			copy[i] = permit[(unsigned char) s[i]];
			continue;
		}
		copy[i] = s[i];
	}

	copy[i] = '\0';
	strcpy(s, copy);
	return (copy);
}

