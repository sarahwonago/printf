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

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].id[0] == format[i] && p[j].id[1] == format[i + 1])
			{
				length += p[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}

