#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_strings - print all the strings in input
 * @separator: ...
 * @n: number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
		va_list(va);
		char *sep;
		unsigned int d;

		sep = separator ? strdup(separator) : strdup("");
		va_start(va, n);
		for (d = 0; d < n; d++)
				printf("%s%s", va_arg(va, char *), (d < n - 1) ? sep : "");
		printf("\n");
		va_end(va);
}
