#include "main.h"

/**
 * length_integer - Calculates the length of the integer
 * @arg: A pointer to the first arg
 *
 * Return: The length of The integer
 */
int length_integer(int arg)
{
	int length = 0;

	while (arg > 0)
	{
		arg /= 10;
		length++;
	}

	return (length);
}
