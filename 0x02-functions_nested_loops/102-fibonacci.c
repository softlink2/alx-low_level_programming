#include <stdio.h>

#define MAX 50

int main(void)
{
	int n, fib, prev;

	prev = 1;
	fib = 0;
	for (n = 0; n < MAX; n++)
	{
		printf("%d%s", fib, fib < MAX ? ", " : "");
		fib = prev + fib;
		prev = fib;
	}

	return (0);
}