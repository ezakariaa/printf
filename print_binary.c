#include "main.h"

void print_binary_h(unsigned int number, int *length_pointer);
int print_binary(va_list arg);

/**
 * print_binary_h - Converts decimal to binary
 * @number: number
 * @length_pointer: The length of pointer
 */
void print_binary_h(unsigned int number, int *length_pointer)
{
	if (number <= 0)
		return;

	print_binary_h(number / 2, length_pointer);
	_putchar((number % 2) + '0');

	(void)(*length_pointer)++;
}

/**
 * print_binary - Prints the binary
 * @arg: A pointer to the first argument
 *
 * Return: The length of the binary
 */
int print_binary(va_list arg)
{
	int length = 0;
	unsigned int number;

	number = va_arg(arg, unsigned int);

	if (number == 0 || number == 1)
	{
		_putchar('0' + number);
		return (1);
	}

	print_binary_h(number, &length);

	return (length);
}
