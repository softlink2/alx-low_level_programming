#include "main.h"

int
_pow_recursion(int x, int y)
{
	int pow = 1;

	if (x == 1 || y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y > 0)
		pow = x * _pow_recursion(x, y - 1);

	return (pow);
}
