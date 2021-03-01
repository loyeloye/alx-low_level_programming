#include <stdio.h>
#include "holberton.h"

/**
 * _isupper - check for upper and lower case
 * @c: variable text that accept vaue
 * Return: Always 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
