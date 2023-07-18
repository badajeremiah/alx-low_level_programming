#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generate a random number and
 *		print the last digit of the number stored in the variable.
 *
 * Return: 0 (Successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of n is %d and is greater than 5", n);
	}
	else if (n == 0)
	{
		printf("Last digit of n is %d and is 0", n);
	}
	else if (n < 6 && !0)
	{
		printf("Last digit of n is %d and is less than 6 and not 0", n);
	}

	return (0);
}
