#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
    match p[] = {
        {"%s", print_s}, {"%c", print_c},
        {"%%", print_percentage},
        {"%i", print_integer}, {"%d", print_integer_dec}
    };

    va_list args;
    int i = 0, j, length = 0;

    va_start(args, format);
    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    while (format[i] != '\0')
    {
        int match_found = 0;

        for (j = 13; j >= 0; j--)
        {
            if (p[j].id[0] == format[i] && p[j].id[1] == format[i + 1])
            {
                length += p[j].f(args);
                i = i + 2;
                match_found = 1;
                break;
            }
        }

        if (!match_found)
        {
            putchar(format[i]);
            length++;
            i++;
        }
    }

    va_end(args);
    return (length);
}
