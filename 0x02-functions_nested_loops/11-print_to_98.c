#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_to_98  - function that print lower case alphabet
 */
void print_to_98(int n)
{
while (n <= 98)
{
if (n < 0)
{
int tmp = -1 * n;
if (tmp > 9)
{
int tmp1 = tmp / 10;
int tmp2 = tmp % 10;
_putchar('-');
_putchar(tmp1 + '0');
_putchar(tmp2 + '0');
_putchar(',');
_putchar(' ');

}
else
{
_putchar('-');
_putchar(tmp + '0');
_putchar(',');
_putchar(' ');
}
n++;
}
else
{
if (n > 9)
{
int tmp1 = n / 10;
int tmp2 = n % 10;
_putchar(tmp1 + '0');
_putchar(tmp2 + '0');
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
n++;
}
}
_putchar('\n');
}
