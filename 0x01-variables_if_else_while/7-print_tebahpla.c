#include <stdio.h>

/**
 * main - entry point for the program
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');
	return (0);
}
