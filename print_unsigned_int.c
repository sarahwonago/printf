#include "main.h"

/**
 * print_unsigned_int - prints an unsigned integer
 * @args: argument to print
 * Return: number of character printed
 */

int print_unsigned_int(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    unsigned int num = n;
    int digit, exp = 1;
    int i = 1;

    while (num / 10 != 0)
    {
        exp *= 10;
        num /= 10;
    }

    num = n;

    while (exp > 0)
    {
        digit = num / exp;
        _putchar(digit + '0');
        num -= digit * exp;
        exp /= 10;
        i++;
    }

    _putchar(n % 10 + '0');

    return i;
}
