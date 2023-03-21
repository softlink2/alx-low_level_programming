#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print 10x the alphabet
 * Return: void
*/

void print_alphabet_x10(void)
{
	int count;

	for (count = 0; count < 10; count++)
		print_alphabet();
	return;
}

/**
 * print_alphabet - print an alphabet, in lowercase, followed by a newline
 * Return: void
*/

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');

	return;
}
