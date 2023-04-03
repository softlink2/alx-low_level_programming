#include "main.h"
#include <string.h>

/**
 * _strspn - get the length of a prefix string
 * @s: string to be searched
 * @accept: string to search from
 * Return: number of characters (non repeating) from accept in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c, count;
	int hash[256] = {0};

	for (c = 0; c < strlen(accept); c++)
		hash[(unsigned char) accept[c]] = 1;
	for (c = 0; c < strlen(s); c++)
	{
		if (hash[(unsigned char) s[c]] == 0)
			break;
		count++;
	}

	return (count);
}
