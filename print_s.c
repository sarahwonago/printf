#include "main.h"

/**
 * print_s - prints a string
 * @args: argument
 * Return: the length of the string
 */

 int print_s(va_list args)
 {
     char *str;
     int i;
     int length;

     str = va_arg(args, char *);
     if(str == NULL)
     {
         str = "(null)";
         length = print_strlen(str);
         for(i = 0; i < length; i++)
         {
             _putchar(str[i]);
         }
         return (length);
     }
     else
     {
         length = print_strlen(str);
         for(i = 0; i < length; i++)
         {
             _putchar(str[i]);
         }
         return (length);
     }
 }
