#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: value from main
 * Return: (0)
 */

void print_rev(char *s)
{
int len = 0;
int i;
/* iterate to find length of string and point to last character */
while (*s != '\0')
{
len++;
++s;
}

/* go to back to character before character */
s--;
/* print string reversed */

for (i = len; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
