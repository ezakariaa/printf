#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct format - Basic structure of format
 * @chr: Struct format
 * @func: The pointer to the function
 */

typedef struct format
{
	char chr;
	int (*func)(va_list);
} cf_t;

int _printf(const char *format, ...);
int _putchar(char character);
void print_Hexa(unsigned int number, int *ptr);
int length_integer(int arg);
int print_address(va_list arg);
int print_hexadecimal_pointer(va_list arg);
int print_binary(va_list arg);
int print_character(va_list arg);
int print_ex_string(va_list arg);
int print_Hexadecimal(va_list arg);
int print_hexadecimal(va_list arg);
int print_integer(va_list arg);
int print_modulo(va_list arg);
int print_octal(va_list arg);
int print_string(va_list arg);
int print_unsigned(va_list arg);
int reverse_string(va_list arg);

#endif
