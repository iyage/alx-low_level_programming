#include "main.h"
#include <stdio.h>
/**
 *print_diagonal - function to print \ base on input
 * @n:input
 */
void print_diagonal(int n)
{
int i = 1;
int y;
if (n <= 0)
_putchar('\n');
while (n > 0)
{
for (y = 0; y < i; y++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
i++;
n--;
}
}
