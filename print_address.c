#include "main.h"

/**
 * print_address - Prints the address
 * @arg: Pointer to the first argument
 *
 * Return: The length of the value.
 */
int print_address(va_list arg)
{
	char *string = "(nil)";
	void *pointer;
	int index;
	int length;
	va_list ap;

	va_copy(ap, arg);
	pointer = va_arg(arg, void *);

	if (pointer == NULL)
	{
		index = 0;
		while (*string)
		{
			_putchar(*string);
			string++;
			index++;
		}
		va_end(ap);
		return (index);
	}

	_putchar('0');
	_putchar('x');

	length = print_hexadecimal_pointer(ap);
	va_end(ap);

	return (length + 2);
}
