#include "main.h"
#include <stdio.h>
/**
 *print_square - function to print \ base on input
 *@size: input for square
 */

void print_square(int size)
{
int x;
int y;
if (size <= 0)
_putchar('\n');
x = size;
while (x > 0)
{
y = size;
while (y > 0)
{
_putchar('#');
y--;
}
_putchar('\n');
x--;
}
}
