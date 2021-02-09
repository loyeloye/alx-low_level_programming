#include "holberton.h"
/**
 *_isalpha - checks for alphabetic character
 *
 * @c: is the ASCII code
 *
 * Return: 1 for letters. Otherwise Return 0.
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
 _putchar('\n');

}
