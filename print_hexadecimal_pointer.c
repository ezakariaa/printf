#include "main.h"

void print_hex_pointer(unsigned long int number, int *ptr);
int print_hexadecimal_pointer(va_list arg);

/**
 * print_hex_pointer - Prints the hexadecimal
 * @ptr: A pointer to the length of hexadecimal to be printed
 * @number: number
 */
void print_hex_pointer(unsigned long int number, int *ptr)
{
	unsigned long int remainder;

	if (number == 0)
		return;

	remainder = number % 16;

	print_hex_pointer(number / 16, ptr);

	if (remainder < 10)
		_putchar('0' + remainder);
	else
		_putchar('a' + remainder - 10);

	(void) (*ptr)++;
}

/**
 * print_hexadecimal_pointer - Prints the hexadecimal
 * @arg: A pointer to the first argument.
 *
 * Return: The length of the hexadecimal.
 */
int print_hexadecimal_pointer(va_list arg)
{
	int length = 0;
	unsigned long int number;

	number = va_arg(arg, unsigned long int);
	print_hex_pointer(number, &length);

	return (length);
}
