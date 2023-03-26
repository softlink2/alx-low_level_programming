#include <stdio.h>

/**
 * main - entry point
 * Description: find and prints the sum of the even-valued terms in a fibonacci
 * sequence with values under 4000000
 * Return: 0
 */

#define MAX 4000000

int main(void)
{
	long fib[3] = {1, 2, 2};
	long sum = 0;

	/**
	 * `fib` is an array used to store the two numbers each Fibonacci
	 * sequence. `fib[0]` stores the current number, and `fib[1]` stores the
	 * previous number.
	 * The next number is computed as the sum of `fib[0]`
	 * and `fib[1]`, and stored in `fib[2]`.
	 * `fib[0]` is set to `fib[1]`, and `fib[1]` is set to `fib[2]`
	 */

	while (fib[2] <= MAX)
	{
		if (fib[2] % 2 == 0)
			sum += fib[2];
		fib[2] = fib[1] + fib[0];
		fib[0] = fib[1];
		fib[1] = fib[2];

	}
	printf("%ld\n", sum);

	return (0);
}
