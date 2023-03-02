#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: to print the character
 *
 * Return: On suceess 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
