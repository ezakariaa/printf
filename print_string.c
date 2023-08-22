#include "main.h"

/**
 * print_string - Prints the string.
 * @arg: A pointer to the first arg
 * Return:void
 */

int print_string(va_list arg)
{
	int length = 0;
	char *character;

	character = va_arg(arg, char *);

	if (character == NULL)
		character = "(null)";

	while (*character != '\0')
	{
		_putchar((unsigned char) *character);
		character++;
		length++;
	}

	return (length);

}
