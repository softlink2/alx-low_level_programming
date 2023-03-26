#include <stdio.h>

/**
 * main - entry point
 * Description: print the first 50 fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

#define MAX 4000000

int main(void)
{
	char n = 0;
	long fib[3] = {1, 2, 0};

	/**
	 * `fib` is an array used to store the two numbers each Fibonacci
	 * sequence. `fib[0]` stores the current number, and `fib[1]` stores the
	 * previous number.
	 * The next number is computed as the sum of `fib[0]`
	 * and `fib[1]`, and stored in `fib[2]`.
	 * `fib[0]` is set to `fib[1]`, and `fib[1]` is set to `fib[2]`
	 */

	while (n++ < 50 && fib[2] < MAX)
	{
		if (fib[2] % 2)
			(n < 50 && fib[1] + fib[2] <= MAX) ? printf("%ld, ", fib[0]) : printf("%ld\n", fib[0]);
		fib[2] = fib[1] + fib[0];
		fib[0] = fib[1];
		fib[1] = fib[2];
	}

	return (0);
}
