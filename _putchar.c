#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints the character.
 * @character: The character to be print
 *
 * Return: Always 1.
 */
int _putchar(char character)
{
    return (write(1, &character, 1));
}
