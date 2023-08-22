#include "main.h"

int print_integer_h(int number);
int integer_min_handle(void);
int print_integer(va_list arg);

/**
 * print_integer_h - Gets the length of a number.
 * @number: number
 * Return: The length of the number
 */
int print_integer_h(int number)
{
	int rem;
	int copy_n;
	int d;
	int index = 0;
	int rev = 0;
	int length = 0;

	copy_n = number;

	while (copy_n > 0)
	{
		copy_n /= 10;
		length++;
	}
	while (number != 0)
	{
		rem = number % 10;
		rev = rev * 10 + rem;
		number /= 10;
	}
	while (rev > 0)
	{
		d = rev % 10;
		_putchar (d + '0');
		rev /= 10;
		index++;
	}
	while (index++ < length)
		_putchar('0');

	return (length);
}

/**
 * integer_min_handle - Prints the integer given.
 *
 * Return: The length of INT_MIN
 */
int integer_min_handle(void)
{
	char *integer_min = "-2147483648";

	while (*integer_min)
	{
		_putchar(*integer_min);
		integer_min++;
	}

	return (11);
}

/**
 * print_integer - Prints the integers
 * @arg: A pointer to the first arg
 *
 * Return: The length of the integer
 */
int print_integer(va_list arg)
{
	int length = 0;
	int _is_negative = 0;
	int number;

	number = va_arg(arg, int);

	if (number == INT_MIN)
	{
		length += integer_min_handle();
		return (length);
	}
	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	if (number < 0)
	{
		_putchar('-');
		number *= -1;
		_is_negative = 1;
	}

	length += print_integer_h(number);

	if (_is_negative)
		length++;

	return (length);
}
