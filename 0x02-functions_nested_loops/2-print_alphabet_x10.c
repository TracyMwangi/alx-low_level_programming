#include "main.h"

/**
 * main - check code
 * print_alphabet_x10 -  prints the alphabet x10
 * Return: 0
 */

void print_alphabet_x10(void);
{
	char c;

	int i = 0;

	while (i <= 9)
{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');

		i++;
	}
return (0);
}
