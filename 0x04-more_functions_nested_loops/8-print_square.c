#include "main.h"
#include <stdio.h>
/**
 *print_square - function to print \ base on input
 *@size: input for square
 */

void print_square(int size)
{
if (size <= 0)
_putchar('\n');
int x  = size;
while (x > 0)
{
int y = size;
while (y > 0)
{
_putchar('#');
y--;
}
_putchar('\n');
x--;
}
}
