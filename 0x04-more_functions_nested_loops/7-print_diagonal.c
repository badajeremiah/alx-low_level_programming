#include "main.h"

/**
 * print_diagonal - Draw diagonal line in terminal
 * @n: length of line
 *
 * Return: void (nothing)
 */
void print_diagonal(int n)
{
	int i, s;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
