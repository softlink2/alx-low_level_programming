#include <stdio.h>

int
main(void)
{
	char c;

	for (c = 0; c < 10; ++c)
	{
		putchar(c % 10 + '0');
	}
	for (c = 'a'; c <= 'f'; ++c)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
