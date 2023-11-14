#include "main.h"

/**
 * print_octal - converts int to octal
 * @val: argument
 * Return: counter
 */

int print_octal(va_list val)
{
    int counter = 0;
    unsigned int num = va_arg(val, unsigned int);

    int array[32];  // Assuming a 32-bit integer

    while (num != 0)
    {
        array[counter] = num % 8;
        num /= 8;
        counter++;
    }

    for (int i = counter - 1; i >= 0; i--)
    {
        _putchar(array[i] + '0');
    }

    return counter;
}
