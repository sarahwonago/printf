#include "main.h"

/**
 * print_binary - converts int to binary
 * @args: argument
 * Return: integer
 */

int print_binary(va_list args)
{
    int f = 0;
    int count = 0;
    int i, a = 1, b;
    unsigned int num = va_arg(args, unsigned int);
    unsigned int p;

    for(i = 0; i < 32; i++)
    {
        p = ((a << (32 - i)) & num);
        if(p >> (31 - i))
            f = 1;
        if(f)
        {
            b = p >> (31 - i);
            _putchar(b + 48);
            count++;
        }
    }
    if(count == 0)
    {
        count++;
        _putchar('0');
    }
    return(count);
}
