#include "main.h"

/**
 * print_ex_string - Prints the prev string.
 * @arg: A pointer to the first arg.
 *
 * Return: The length of the string
 */
int print_ex_string(va_list arg)
{
	char *string;
	int index;
	int check;
	int length = 0;

	string = va_arg(arg, char *);

	if (string == NULL)
		string = "(null)";

	for (index = 0; string[index] != '\0'; index++)
	{
		if (string[index] < 32 || string[index] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length += 2;
			check = string[index];

			if (check < 16)
			{
				_putchar('0');
				length++;
			}

			print_Hexa(check, &length);
		}
		else
		{
			_putchar(string[index]);
			length++;
		}
	}

	return (length);
}
