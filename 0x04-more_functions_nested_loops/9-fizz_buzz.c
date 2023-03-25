#include <stdio.h>

/**
 * main - entry point
 * Description: Fizz Buzz program that prints the numbers
 * 1 - 100. For multiples of three print Fizz, for multiples
 * of 5 print Buzz, for numbers that are multiples of both
 * print FizzBuzz.
*/

#define FIZZ 3
#define BUZZ 5

int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % FIZZ == 0 && c % BUZZ == 0)
			printf("%s", "FizzBuzz");
		else if (c % FIZZ == 0)
			printf("%s", "Fizz");
		else if (c % BUZZ == 0)
			printf("%s", "Buzz");
		else
			printf("%d", c);
		if (c < 100)
			printf(" ");
	}

	return (0);
}
