#include "main.h"
#include <stdio.h>
/**
 * more_numbers - function to print 0-14 10 times
 */
void more_numbers(void)
{
int x;
int y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 15; y++)
{
if (y > 9)
{
_putchar((y / 10) + '0');
}
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}
