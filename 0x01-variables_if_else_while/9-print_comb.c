#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i == '9')
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');

	return (0);
}
