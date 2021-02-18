#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of arrary
 */

void reverse_array(int *a, int n)
{
int tmp, beg = 0;
int end = n - 1; /*omit null terminator in length*/
while (beg < end)
{
tmp = *(a + beg);
*(a + beg) = *(a + end);
*(a + end) = tmp;
beg++, end--;
}
}
