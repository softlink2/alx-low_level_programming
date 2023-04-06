#include "main.h"

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
		return (_tail_sqrt(x, g + 1));
	return (g);
}
