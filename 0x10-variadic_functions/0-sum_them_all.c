#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum an n number of parameters
 * @n: number of parameters to sum
 * Return: a sum of n parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int d, sum;

	if (n == 0)
		return (0);

	va_start(va, n);
	for (d = 0; d < n; d++)
		sum += va_arg(va, int);
	va_end(va);

	return (sum);
}
