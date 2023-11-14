#include "main.h"

/**
 * print_strlen - returns the length of a string
 * @s: pointer to a string
 * Return: length of the string
 */
int print_strlen(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++);
    return i;
}

/**
 * print_strlenc - returns the length of a constant string
 * @str: pointer to a string
 * Return: length of the string
 */
int print_strlenc(const char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return i;
}
