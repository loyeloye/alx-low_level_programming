#include "holberton.h"

/**
 * _abs - gives absolute value of integer
 *
 * @n: input number.
 *
 * Return: absolute value
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (n * -1);
}
}
