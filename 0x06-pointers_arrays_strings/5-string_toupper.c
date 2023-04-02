#include "main.h"
#include <string.h>

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @str: string
 * Return: a pointer to the first element of the string
 */

char *string_toupper(char *str)
{
		unsigned c;

		for (c = 0; c < strlen(str); c++)
				if (str[c] >= 'a' && str[c] <= 'z')
						str[c] = str[c] - 'a' + 'A';
		return (str);
}
