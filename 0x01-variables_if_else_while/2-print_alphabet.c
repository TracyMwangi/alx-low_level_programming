#include <stdio.h>

/**
 * main - Entry point
 * writing a program that prints the alphabet in lowercase
 * Return: always 0 (success)
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

{
	putchar(ch); }

	putchar('\n');
	return (0);
	}
