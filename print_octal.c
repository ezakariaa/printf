#include "main.h"

void h_print_octal(unsigned int number, int *ptr);
int print_octal(va_list arg);

/**
 * h_print_octal - Prints the octal
 * @number: The number
 * @ptr: A pointer to the length of the octal to be printed.
 */
void h_print_octal(unsigned int number, int *ptr)
{
	unsigned int remainder;

	if (number == 0)
		return;

	remainder = number % 8;
	h_print_octal(number / 8, ptr);
	_putchar('0' + remainder);

	(void)(*ptr)++;
}

/**
 * print_octal - Prints octal
 * @arg: A pointer to the first argument
 *
 * Return: The length of the octal.
 */
int print_octal(va_list arg)
{
	int pointer = 0;
	unsigned int numb;

	numb = va_arg(arg, unsigned int);

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	h_print_octal(numb, &pointer);

	return (pointer);
}
