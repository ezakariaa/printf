#include "main.h"

/**
 * print_Hexa - Prints the hexadecimal
 * @ptr: The length of the hexadecimal to be printed
 * @number: The decimal number
 */
void print_Hexa(unsigned int number, int *ptr)
{
	unsigned int remainder;

	if (number == 0)
		return;

	remainder = number % 16;

	print_Hexa(number / 16, ptr);

	if (remainder < 10)
		_putchar('0' + remainder);
	else
		_putchar('A' + remainder - 10);

	(void) (*ptr)++;
}
/**
 * print_Hexadecimal - Prints the hexadecimal
 * @arg: A pointer to the first arg
 *
 * Return: The length of the hexadecimal number
 */
int print_Hexadecimal(va_list arg)
{
	int pointer = 0;
	unsigned int numb;

	numb = va_arg(arg, unsigned int);

	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}

	print_Hexa(numb, &pointer);

	return (pointer);
}
