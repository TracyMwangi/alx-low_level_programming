#include "main.h"
#include <stdio.h>

/**
 * main - check code
 * print_alphabet_x10 -  prints the alphabet x10
 * Return: 0
 */
int main(void)

{
	int alpha;
	int alpha2;

	for (alpha = 0; alpha <= 9; alpha++)

	{
		for (alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
		{
			putchar(alpha2);
		}
		putchar('\n');
	}
return (0);
}
