#include "main.h"

void print_hexad(unsigned int num, int *ptr);
int print_hexadecimal(va_list arg);

/**
 * print_hexad - Prints hexadecimal
 * @ptr: The pointer to the length of the hexadecimal to be printed
 * @num: The number
 */
void print_hexad(unsigned int num, int *ptr)
{
	unsigned int remainder;

	if (num == 0)
		return;

	remainder = num % 16;

	print_hexad(num / 16, ptr);

	if (remainder < 10)
		_putchar('0' + remainder);
	else
		_putchar('a' + remainder - 10);

	(void)(*ptr)++;
}

/**
 * print_hexadecimal - Prints a hexadecimal
 * @arg: A pointer to the first argument.
 *
 * Return: The length of the hexadicimal.
 */
int print_hexadecimal(va_list arg)
{
	unsigned int num;
	int p_length = 0;

	num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	print_hexad(num, &p_length);

	return (p_length);
}
