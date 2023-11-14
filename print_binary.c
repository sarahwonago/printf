#include "main.h"

/**
 * print_binary - converts unsigned int to binary
 * @args: argument
 * Return: number of characters printed
 */
int print_binary(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    int count = 0;

    if (num == 0)
    {
        _putchar('0');
        count++;
    }
    else
    {
        int i;
        for (i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            if (bit || count > 0)
            {
                _putchar(bit + '0');
                count++;
            }
        }
    }

    return count;
}
