#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of arrar
 *
 * Return: void
 */

void reveverse_array(int *a, int n)
{
int tmp, beg = 0;
int end = n - 1; /*omit nul terminator in length*/
while (beg < end)
{
tmp = *(a + beg);
*(a + beg) = *(a + end);
*(a + end) = tmp;
beg++, end--;
}
}
