#include "holberton.h"
/**
 * print_sign - to show if the numer is greater, equal or less than zero.
 *
 * @n: the input number as an integer.
 *
 * Return: 1 if greater than zero. 0 if equal to zero. -1 if less than zero.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
_putchar('\n');
}
