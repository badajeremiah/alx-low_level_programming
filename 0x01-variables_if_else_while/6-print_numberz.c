#include <stdio.h>

/**
 * main - entry point for program
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int b10;

	for (b10 = 0; b10 < 10; b10++)
		putchar(b10 % 10 + '0');

	putchar('\n');
	return (0);
}
