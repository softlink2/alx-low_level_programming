#include <stdio.h>

#define MAX 1024

/**
 * main - entry point
 * Description: compute and print the sum of all the multiples of
 * 3 and 5 below 1024, followed by a newline
 * Return: Always return 0
*/

int main(void)
{
	int c, d;

	d = 0;
	for (c = 0; c < MAX; c++)
	{
		if (c % 3 == 0 || c % 5 == 0)
			d += c;
	}
	printf("%d\n", d);
	return (0);
}
