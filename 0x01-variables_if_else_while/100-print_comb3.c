#include <stdio.h>

int
main(void)
{
	int c, d;
	int count;

	for (c = 0; c < 10; c++)
	{
		count = c;
		for (d = 0; d < 10; d++)
		{
			if (count < d)
			{
				putchar(c % 10 + '0');
				putchar(d % 10 + '0');
				if (count != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

