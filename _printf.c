#include "main.h"

int h_hashtag(char character, int *ptr);
int h_space_plus(char character, int number);
int _printf(const char *format, ...);

/**
 * h_hashtag - handle the hashtag (#) sign.
 * @charater: The character after the hashtag sign.
 * @ptr: pointer to current character.
 *
 * Return: The length of the printed character.
 */
int h_hashtag(char character, int *ptr)
{
	int length = 0;

	if (character == 'x' || character == 'X')
	{
		_putchar('0');
		_putchar('x');
		length += 2;
		(*ptr)++;
	}
	else if (character == 'o')
	{
		_putchar('0');
		length++;
		(*ptr)++;
	}
	return (length);
}

/**
 * h_space_plus - handle spaces and plus (+) sign after the modulo (%).
 * @character: The chararacter modulo (%) sign.
 * @number: Printed number
 *
 * Return: The length of the printed character.
 */
int h_space_plus(char character, int number)
{
	int length = 0;

	if (character == '+')
	{
		int _is_negative;

		_is_negative = number > 0 ? 0 : 1;
		if (!_is_negative)
		{
			_putchar('+');
			length++;
		}
	}
	else
	{
		_putchar(' ');
		length++;
	}
	return (length);
}

/**
 * _printf - Produces output according to a format.
 * @format: A character string.
 * @...: Variable numberber of arguments.
 *
 * Return:  The numberber of characters printed.
 */
int _printf(const char *format, ...)
{
	int index = 0;
	int length = 0;
	int j;
	va_list arg;

	cf_t functions[] = {{'c', print_character}, {'s', print_string},
		{'%', print_modulo}, {'i', print_integer},
		{'d', print_integer}, {'r', reverse_string},
		{'x', print_hexadecimal}, {'X', print_Hexadecimal},
		{'o', print_octal}, {'u', print_unsigned},
		{'b', print_binary}, {'p', print_address},
		{'S', print_ex_string}
	};
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(arg, format);

	while (format[index])
	{
		if (format[index] == '%')
		{
			if (format[index + 1] == '\0')
				return (-1);
			if (format[index + 1] == '+' || format[index + 1] == ' ')
			{
				va_list ap;

				va_copy(ap, arg);
				length += h_space_plus(format[index + 1], va_arg(ap, int));
				index++;
			}
			else if (format[index + 1] == '#')
			{
				length += h_hashtag(format[index + 2], &index);
			}
			j = 0;
			while (j < 13)
			{
				if (format[index + 1] == functions[j].chr)
				{
					length += functions[j].func(arg);
					index += 2;
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[index]);
			length++;
			index++;
		}
	}
	va_end(arg);
	return (length);
}
