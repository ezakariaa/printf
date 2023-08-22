#include "main.h"

/**
 * print_character - Prints the character.
 * @arg: A pointer to the first argument.
 *
 * Return: always 1.
 */
int print_character(va_list arg)
{
	_putchar(va_arg(arg, int));

	return (1);
}
