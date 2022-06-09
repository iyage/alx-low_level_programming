#include "main.h"
#include <stdio.h>
/**
 *print_triangle - draw triangle
 *@size: size of trinagle
 */
void print_triangle(int size)
{
int i = size;
int x = 1;
int y;
if (size <= 0)
_putchar('\n');
while (size > 0)
{
for (y = 1; y < i; y++)
{
_putchar(' ');
}
for (y = 0; y < x; y++)
{
_putchar('#');
}
_putchar('\n');
i--;
x++;
size--;
}
}
