#include "holberton.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the address of a string
 * @to: string to set value to
 * Return: nothing
 */

void set_string(char **s, char *to)
{
*s = to;
}
