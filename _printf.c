#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: format string
 * Return: number of characters printed (excluding null byte)
 */
int _printf(const char * const format, ...)
{
    spec p[] = {
        {"%c", print_c},
        {"%s", print_s},
        {"%%", print_percentage},
        {"%d", print_integer_dec},
        {"%i", print_integer}
    };

    va_list args;
    int i = 0, j, length = 0;

    va_start(args, format);
    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            j = 0;
            while (j < (int)(sizeof(p) / sizeof(p[0])))
            {
                if (format[i + 1] == p[j].id[1])
                {
                    length += p[j].f(args);
                    i += 2;
                    break;
                }
                j++;
            }
            if (j == (int)(sizeof(p) / sizeof(p[0])))
            {
                _putchar('%');
                length++;
                i++;
            }
        }
        else
        {
            _putchar(format[i]);
            length++;
            i++;
        }
    }

    va_end(args);
    return (length);
}
