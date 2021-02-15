#include <stdio.h>
#include "holberton.h"
/**
 * swap_int -swaps the value of two integers
 * @a: value to be swapped
 * @b: value to be swapped
 * Return: not.
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
