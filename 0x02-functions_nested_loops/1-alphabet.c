#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++); 
	
	{
		putchar(ch);
	}
	
	putchar('\n');
}
