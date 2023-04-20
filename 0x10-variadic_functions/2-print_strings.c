#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_strings - print all the strings in input
 * @separator: string to print between strings
 * @n: number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(va);
	char *sep, *str;
	unsigned int d;

	sep = separator ? strdup(separator) : strdup("");
	va_start(va, n);
	for (d = 0; d < n; d++)
	{
		str = va_arg(va, char *);
		if (!str)
			str = strdup("(nil)");
		printf("%s%s", str, (d < n - 1) ? sep : "");
	}
	printf("\n");
	va_end(va);
}

