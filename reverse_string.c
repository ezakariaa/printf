#include "main.h"

/**
 * reverse_string - Reverse the string
 * @arg: A pointer to the first arg
 *
 * Return: The length of the reversed string.
 */
int reverse_string(va_list arg)
{
	int index;
	int length = 0;
	char *pointer;
	char *string;

	string = va_arg(arg, char *);
	pointer = string;

	if (!string)
	{
		string = "(null)";

		for (index = 0; index < 6; index++)
			_putchar(string[index]);

		return (0);
	}
	while (*string)
	{
		length++;
		string++;
	}
	for (index = length - 1; index >= 0; index--)
		_putchar(pointer[index]);

	return (length);
}
