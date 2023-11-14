#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: format string
 * Return: number of characters printed (excluding null byte)
 */
int _printf(const char * const format, ...)
{
    match p[] = {
        {"%s", print_s}, {"%c", print_c},
        {"%%", print_percentage},
        {"%i", print_integer}, {"%d", print_integer_dec}, {"%r", print_s_reverse},
        {"%R", print_rot13}, {"%b", print_binary},
        {"%u", print_unsigned_int},
        {"%o", print_octal}, {"%x", print_hexadecimal}, {"%X", print_HEX},
        {"%S", print_String}, {"%p", print_address}
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
