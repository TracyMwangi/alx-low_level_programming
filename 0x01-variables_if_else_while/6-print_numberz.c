#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */

int main(void)

{
	int i;

	for (i = 0; i <= 9; i++)

		putchar((i % 10) + '0');

	putchar('\n');
	return (0);
}
