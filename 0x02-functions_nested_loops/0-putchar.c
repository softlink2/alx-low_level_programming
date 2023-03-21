#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: A program that prints _putchar, followed by a newline
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *str = "_putchar";

	while (*str)
		_putchar(*str++);
	_putchar('\n');

	return (0);
}
