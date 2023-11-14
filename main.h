#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format - Struct specifier
 *
 * @id: The identifier string
 * @f: The function associated
 */
typedef struct specifier
{
    char *id;
    int (*f)();
    
} spec;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_strlen(char *s);
int print_strlenc(const char *str);
int print_percentage(void);
int print_integer(va_list args);
int print_integer_dec(va_list args);
int print_binary(va_list args);
int print_unsigned_int(va_list args);
int print_octal(va_list val);
int print_hexadecimal(va_list val);
int print_HEX(va_list val);
int print_HEX_valparam(unsigned int num);
int print_String(va_list val);
int print_hex_valarg(unsigned long int num);
int print_address(va_list val);
int print_s_reverse(va_list val);
int print_rot13(va_list val);

#endif /* MAIN_H */

