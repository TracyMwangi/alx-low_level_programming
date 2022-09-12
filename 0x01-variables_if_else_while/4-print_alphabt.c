#include <stdio.h>

/**
 * main - entry point
 * Print all the letters except q and e
 * return: always 0 (success)
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

		if ((ch != 'q') && (ch != 'e'))

		{
			putchar(ch); }
	putchar('\n');
		return (0);
}
