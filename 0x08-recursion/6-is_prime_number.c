#include "main.h"

int
is_prime_number(int n)
{
	return (_tail_prime_number(n, 2));
}

int
_tail_prime_number(int n, int x)
{
	if (n <= 1)
		return (0);
	else if (x * _sqrt_recursion(n) == n)
		return (0);
	else if (x * _sqrt_recursion(n) > n)
		return (0);
	else if (x * _sqrt_recursion(n) != n && x * _sqrt_recursion(n) > 0)
		return (_tail_prime_number(n, x + 1));
	return (1);
}

int
_sqrt_recursion(int x)
{
	return (_tail_sqrt_recursion(x, 1));
}

int
_tail_sqrt_recursion(int x, int g)
{
	if (x == 1)
		return (1);
	else if (x < 1)
		return (-1);
	else if (g * g > x)
		return (-1);
	else if (g * g != x)
		return (_tail_sqrt_recursion(x, g + 1));
	return (g);
}
