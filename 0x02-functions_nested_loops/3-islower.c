#include "main.h"

/**
 * _islower - checks is a character is lowercase
 * @c: The value to check
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
