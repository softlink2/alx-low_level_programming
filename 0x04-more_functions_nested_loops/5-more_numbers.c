#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 - 14
 * followed by a newline
*/

void more_numbers(void)
{
	int n;

	for (n = 0x0; n < 0xf; n++)
	{
		if (n >= 0xA && n < 0xf)
		{
			_putchar(n / 0xA + '0');
			_putchar(n % 0xA + '0');
		}
		else
			_putchar(n + '0');
	}
	_putchar('\n');
}
