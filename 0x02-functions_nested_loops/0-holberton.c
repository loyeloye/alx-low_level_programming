#include "holberton.h"

/**
* main - Print the word "Holberton"
*
*Return: Always 0 (Success)
*/

int main(void)
{
int i;
char x[] = "Holberton";

for (i = 0; i < 9; i++)
{
_putchar(x[i]);
}
_putchar('\n');

return (0);

}
