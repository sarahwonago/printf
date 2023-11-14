#include "main.h"

/**
 * print_String - prints string and others
 * @val: argument
 * Return: the length of the string
 */

 int print_String(va_list val)
 {
     char *str;
     int i, value;
     int length = 0;

     str = va_arg(val, char *);
     if(str == NULL)
     {
         str = "(null)";
     }
     for(i = 0; str[i] != '\0'; i++)
     {
         if(str[i] < 32 || str[i] >= 127)
         {
             _putchar('\\');
             _putchar('x');
             length = length + 2;
             value = str[i];
             if(value < 16)
             {
                 _putchar('0');
                 length++;
             }
             length = length + print_HEX_valparam(value);
         }
         else
         {
             _putchar(str[i]);
             length++;
         }
     }
     return(length);
 }

