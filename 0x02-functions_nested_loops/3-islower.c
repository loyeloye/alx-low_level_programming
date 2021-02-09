#include "holberton.h"

/**
 * _islower - finds lowercase characters
 * @c: the character in ASCII code
 * Return: 1 if character is lowercase and 0 for the rest
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar ('\n');
}
