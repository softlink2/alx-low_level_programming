#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - split strings into words
 * @str: string
 * Return: an array of strings, or NULL
*/

char **strtow(char *str)
{
	char **words;
	unsigned int i, c, d, start, end;
	int state = 0;

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	/**
		* over-provision memory to prevent pre-processing
		*/

	words = malloc((strlen(str) / 2 + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	start = c = 0;
	for (i = 0; i <= strlen(str); i++)
	{
		if (!isblank(str[i]) && str[i] != '\0')
		{
			state = 1;
			start++;
		}
		else if ((isblank(str[i]) || str[i] == '\0') &&
				state == 1 && !isblank(str[i - 1]))
		{
			state = 0;

			words[c] = malloc(start + 1);
			if (words[c] == NULL)
				return (NULL);

			for (end = i - start, d = 0; str[end] != '\0' &&
					!isblank(str[end]); end++, d++)
				words[c][d] = str[end];
			words[c++][start] = '\0';
			start = 0;
		}
	}

	return (words);
}

