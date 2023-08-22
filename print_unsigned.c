#include "main.h"

int h_print_unsigned(unsigned int num);
int print_unsigned(va_list arg);

/**
 * h_print_unsigned - Prints the ints.
 * @num: The num.
 *
 * Return: The length of the integer.
 */
int h_print_unsigned(unsigned int num)
{
	unsigned int rev = 0;
	unsigned int rem;
	unsigned int n_copy;
	unsigned int d;
	int index = 0;
	int length = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	n_copy = num;

	while (n_copy > 0)
	{
		n_copy /= 10;
		length++;
	}
	while (num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}
	while (rev > 0)
	{
		d = rev % 10;
		_putchar(d + '0');
		rev /= 10;
		index++;
	}
	while (index++ < length)
		_putchar('0');

	return (length);
}
/**
 * print_unsigned - Prints the unsigned integer
 * @arg: The pointer to the first arg
 *
 * Return: The Length of the unsigned integer.
 */
int print_unsigned(va_list arg)
{
	long y = va_arg(arg, long);
	char *negative_number = "4288073002";
	int length = 0;

	if (y < 0)
	{
		while (*negative_number != '\0')
		{
			_putchar(*negative_number);
			negative_number++;
			length++;
		}
	}
	else
	{
		unsigned int num = (unsigned int)y;

		length += h_print_unsigned(num);
	}

	return (length);
}
