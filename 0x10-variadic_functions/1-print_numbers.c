#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers, followed by a newline
 * @separator: string to print in between each number
 * @n: number of integers to pass to the function
 */

void
print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(va);
	char in_sep = 0;
	unsigned int d;

	if (separator == NULL)
		in_sep = 1;

	va_start(va, n);
	for (d = 0; d < n; d++)
		printf("%d%s", va_arg(va, int), (in_sep == 0 && d < n - 1) ? separator : "");
	printf("\n");
	va_end(va);
}
