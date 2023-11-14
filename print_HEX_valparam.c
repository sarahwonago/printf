#include "main.h"

/**
 * print_HEX - converts to HEXADECIMAL
 * @val: argument
 * Return: counter
 */

 int print_HEX_valparam(unsigned int num)
 {
     int i, counter = 0;
     int *array;
     unsigned int temp = num;

     while(num / 16 != 0)
     {
         num = num / 16;
         counter++;
     }
     counter++;
     array = malloc(sizeof(int) * counter);
     for(i = 0; i < counter; i++)
     {
         array[i] = temp % 16;
         temp = temp / 16;
     }
     for(i = counter - 1; i >= 0; i--)
     {
        if(array[i] > 9)
        {
            array[i] = array[i] + 7;
        }
        _putchar(array[i] + '0');
     }
     free(array);
     return(counter);
 }

