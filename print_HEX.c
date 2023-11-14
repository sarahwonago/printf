#include "main.h"

/**
 * print_hexadecimal - converts to hexadecimal
 * @val: argument
 * Return: counter
 */

int print_HEX(va_list val)
{
    int counter = 0;
    unsigned int num = va_arg(val);

    int array[8];  // Assuming a 32-bit integer, so 8 hex digits

    while (num != 0)
    {
        array[counter] = num % 16;
        num /= 16;
        counter++;
    }

    for (int i = counter - 1; i >= 0; i--)
    {
        _putchar((array[i] < 10) ? (array[i] + '0') : (array[i] - 10 + 'A'));
    }

    return counter;
}
