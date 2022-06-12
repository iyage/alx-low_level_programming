#include "main.h"
/**
 * print_times_table  - function that print times table up to n
 * @n: times table
 */
void print_times_table(int n)
{
int num, mul, result;
if (n < 0 || n > 15)
{

}
else
{
for (num = 0; num <= n; num++)
{
for (mul = 0; mul <= n; mul++)
{
result = num * mul;
if (result > 9)
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
if (mul != n)
_putchar(',');
_putchar(' ');
}
else
{
_putchar(num * mul + '0');
if (mul != n)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
}
