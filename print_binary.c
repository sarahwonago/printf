#include "main.h"

/**
 * print_binary - converts unsigned int to binary
 * @args: argument
 * Return: number of characters printed
 */
int print_binary(va_list args)
{
    int count = 0;
    unsigned int num = va_arg(args, unsigned int);

    for (int i = 31; i >= 0; i--)
    {
        _putchar((num & (1 << i)) ? '1' : '0');
        count++;
    }

    return (count);
}
