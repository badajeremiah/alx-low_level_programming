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
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	printf("Last digit of %d is ", n);

	if (lastDigit > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is 0\n", lastDigit);
	}
	else if (lastDigit < 6 && !0)
	{
		printf("%d and is less than 6 and not 0\n", lastDigit);
	}

	return (0);
}
