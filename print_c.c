#include "main.h"

/**
 * print_c - prints a character
 * @args: arguments
 * Return: 1 (number of characters printed)
 */
int print_c(va_list args)
{
    char str;

    str = va_arg(args, int);
    _putchar(str);
    return (1);
}
