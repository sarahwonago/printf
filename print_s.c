#include "main.h"

/**
 * print_s - prints a string
 * @args: argument
 * Return: the length of the string
 */
int print_s(va_list args)
{
    char *str = va_arg(args, char *);

    if (str == NULL)
    {
        str = "(null)";
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }

    return print_strlen(str);
}
