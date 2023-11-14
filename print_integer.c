#include "main.h"

/**
 * print_integer - prints an integer
 * @args: argument to print
 * Return: characters printed
 */

 int print_integer(va_list args)
 {
     int n = va_arg(args, int);
     int num, l = n % 10, d, e = 1;
     int i = 1;

     n = n / 10;
     num = n;

     if(l < 0)
     {
         _putchar('-');
         num = -num;
         n = -n;
         l = -l;
         i++;
     }
     if(num > 0)
     {
         while(num / 10 != 0)
         {
             e = e * 10;
             num = num / 10;
         }
         num = n;
         while(e > 0)
         {
             d = num / e;
             _putchar(d + '0');
             num = num - (d * e);
             e = e /10;
             i++;
         }
     }
     _putchar(l + '0');

     return(i);
 }

 /**
 * print_integer_dec - prints decimal
 * @args: argument to print
 * Return: characters printed
 */

  int print_integer_dec(va_list args)
 {
     int n = va_arg(args, int);
     int num, l = n % 10, d, e = 1;
     int i = 1;

     n = n / 10;
     num = n;

     if(l < 0)
     {
         _putchar('-');
         num = -num;
         n = -n;
         l = -l;
         i++;
     }
     if(num > 0)
     {
         while(num / 10 != 0)
         {
             e = e * 10;
             num = num / 10;
         }
         num = n;
         while(e > 0)
         {
             d = num / e;
             _putchar(d + '0');
             num = num - (d * e);
             e = e /10;
             i++;
         }
     }
     _putchar(l + '0');

     return(i);
 }

