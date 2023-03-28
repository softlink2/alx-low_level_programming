#include <stdio.h>

/**
 * main - entry point
 * Description: print the first 50 fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

#define STARTX 1
#define STARTY 2

int main(void)
{
	char n = 0;
	long fib[3] = {STARTX, STARTY, STARTY};

	while (n++ < 50)
	{
		(n < 50) ? printf("%ld, ", fib[0]) : printf("%ld\n", fib[0]);
		fib[2] = fib[1] + fib[0];
		fib[0] = fib[1];
		fib[1] = fib[2];
	}

	return (0);
}
