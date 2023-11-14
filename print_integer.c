#include "main.h"

/**
 * print_number - helper function to print an integer
 * @n: integer to print
 * @negative: flag indicating if the number is negative
 * Return: number of characters printed
 */
int print_number(int n, int negative)
{
    int num, l, d, e = 1;
    int i = 1;

    num = n;

    if (negative)
    {
        _putchar('-');
        num = -num;
        i++;
    }

    while (num / 10 != 0)
    {
        e *= 10;
        num /= 10;
    }

    num = n;

    while (e > 0)
    {
        d = num / e;
        _putchar(d + '0');
        num -= d * e;
        e /= 10;
        i++;
    }

    l = n % 10;
    _putchar(l + '0');

    return (i);
}

/**
 * print_integer - prints an integer
 * @args: argument to print
 * Return: characters printed
 */
int print_integer(va_list args)
{
    int n = va_arg(args, int);
    return print_number(n, n < 0);
}

/**
 * print_integer_dec - prints decimal
 * @args: argument to print
 * Return: characters printed
 */
int print_integer_dec(va_list args)
{
    int n = va_arg(args, int);
    return print_number(n, n < 0);
}
