#include <stdio.h>
#include <stdlib.h>

#define MAX 612852475143ULL

void sieve(unsigned long long limit, unsigned long long *primes)
{
	unsigned long long i, j;

	for (i = 0; i <= limit; i++)
		primes[i] = 1;
	primes[0] = primes[1] = 0;

	for (i = 2; i * i <= limit; i++)
		if (primes[i])
			for (j = i * i; j <= limit; j += i)
				primes[j] = 0;
}

int main(void)
{
	unsigned long long p, *primes;

	primes = malloc(MAX + 1 * (sizeof(unsigned long long)));
	if (primes == NULL)
		return (-1);

	sieve(MAX, primes);
	for (p = MAX; p >= 2; p--)
	{
		if (primes[p])
		{
			printf("%llu\n", p);
			free(primes);
			return (1);
		}
	}

	free(primes);
	return (0);
}
