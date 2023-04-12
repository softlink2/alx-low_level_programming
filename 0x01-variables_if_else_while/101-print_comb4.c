#include <stdio.h>

int
main(void)
{
	int b, c, d;
	int first_check, second_check;

	for (b = 0; b < 10; b++)
	{
		first_check = b;
		for (c = 0; c < 10; c++)
		{
			second_check = c;
			for (d = 0; d < 10; d++)
			{
				if (first_check < c && second_check < d)
				{
					putchar(b % 10 + '0');
					putchar(c % 10 + '0');
					putchar(d % 10 + '0');
					if (b != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

